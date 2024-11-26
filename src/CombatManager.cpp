#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>
#include <cctype>

#include "../include/CombatManager.h"
#include "../include/Player.h"
#include "../include/Enemy.h"
#include "../include/Item.h"
#include "../include/QuestionManager.h"
#include "../include/Question.h"

using namespace std::literals::string_literals;

CombatManager::CombatManager()
{
    questionTiers.resize(5);
    questionsUsed.resize(5);

    for (int i = 0; i < 5; i++) 
    {
        questionTiers[i] = qm.fetchQuestion(i + 1); // Fetch default tier questions
        questionsUsed[i] = questionTiers[i];       // Copy default questions to "used" list
    }   
}

void CombatManager::printQuestion(Enemy &enemy)
{
    bool encapsulateCode = false;
    tempQuestion = qm.enemyQuestion(enemy, questionsUsed, questionTiers);
    for(auto &ch : tempQuestion.questionStirng)
    {
        if(ch == '@' && !encapsulateCode)
        {
            std::cout << "\033[1;45m";
            encapsulateCode = true;
        }
        else if(ch == '@' && encapsulateCode)
        {
            std::cout << "\033[0m";
            encapsulateCode = false;
        }
        else
            std::cout << ch;
    }

    std::cout << std::endl;
}

void CombatManager::playDialogue(const std::vector<std::string>& lines, int charDelayMs, int lineDelayMs) 
{
    auto startTime = std::chrono::steady_clock::now(); // Record the start time
    size_t currentLine = 0;
    size_t currentChar = 0;
    int threeLines = 0;
    bool isBold = true; // Start with bold text

    while (currentLine < lines.size()) 
    {
        // Calculate elapsed time
        auto now = std::chrono::steady_clock::now();
        auto elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(now - startTime);

        // Print the next character if enough time has passed
        if (elapsedTime.count() >= charDelayMs) 
        {
            if (currentChar < lines[currentLine].size()) 
            {
                // Check if the current character is a colon
                if (lines[currentLine][currentChar] == ':' && isBold) 
                {
                    // Print the colon in bold
                    std::cout << "\033[1m" << lines[currentLine][currentChar] << "\033[0m" << std::flush;
                    isBold = false; // Switch to normal text after the colon
                } 
                else 
                {
                    // Print the next character with the appropriate formatting
                    if (isBold)
                        std::cout << "\033[1m" << lines[currentLine][currentChar] << "\033[0m" << std::flush;
                    else
                        std::cout << lines[currentLine][currentChar] << std::flush;
                }
                currentChar++;
            } 
            else if (elapsedTime.count() >= lineDelayMs) 
            {
                // Move to the next line after a delay
                std::cout << std::endl;
                threeLines++;
                currentLine++;
                currentChar = 0;
                startTime = std::chrono::steady_clock::now(); // Reset the timer for the new line
            }
        }

        // Allow the program to perform other tasks
        std::this_thread::sleep_for(std::chrono::milliseconds(1)); // Prevent tight CPU loop

        if (threeLines == 3)
        {
            std::cout << "\033[2J\033[H"; 
            threeLines = 0;
        }
    }

    std::cout << std::endl; // Ensure the last line ends properly
}

void CombatManager::takeDamage(Player &player, Enemy &enemy)
{
    player.takeDamage(enemy.fetchDamage());
}

void CombatManager::causeDamage(Enemy &enemy, int amount)
{
    enemy.takeDamaege(amount);
}

void CombatManager::useItem(Player &player, Enemy &enemy, Item &item)
{
    if(item.type == "heal"s)
    {
        player.removeItem(item);
        player.heal(item.value);
    }
    else if(item.type == "block"s)
    {
        player.removeItem(item);
        player.shield(item.value);
    }
    else if(item.type == "damage"s)
    {
        causeDamage(enemy, item.value);
    }
}

bool CombatManager::result(Player &player, Enemy &enemy)
{
    return player.isAlive() && enemy.isAlive();
}

inline CombatManager::resultstatus CombatManager::input(Player &player, Enemy &enemy)
{
    std::string answer;
    std::getline(std::cin, answer);
    answer = stringUpper(answer);
    
    if(stringUpper(tempQuestion.answer) == answer)
    {
        return resultstatus::Correct;
    }
    else
    {
        for(auto &item : player.showInventory())
        {
            if(answer == ("USE "s + stringUpper(item.name)))
            {
                useItem(player, enemy, item);
                return resultstatus::Use;
            }
        }

        return resultstatus::Incorrect;
    }
}

std::string stringUpper(std::string str)
{
    for(auto &ch : str)
    {
        ch = std::toupper(ch);
    }
    return str;
}