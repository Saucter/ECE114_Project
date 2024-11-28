#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>
#include <cctype>
#include <ctime>
#include <random>
#include <algorithm>
#include <iomanip>
#include <sstream>


#include "../include/CombatManager.h"
#include "../include/Player.h"
#include "../include/Enemy.h"
#include "../include/Item.h"
#include "../include/QuestionManager.h"
#include "../include/Question.h"
#include "../include/questionTiers.h"

using namespace std::literals::string_literals;

CombatManager::CombatManager()
{
    questionTiers.resize(5);
    questionsUsed.resize(5);

    questionTiers = {tier1Questions, tier2Questions, tier3Questions, tier4Questions, tier5Questions};
    questionsUsed = questionTiers;
}

void CombatManager::drawBox(Player &player, Enemy &enemy, Question &question) 
{
    // Clear the screen
    std::cout << "\033[2J\033[H";
    std::vector<Item> inventory = player.showInventory();
    std::vector<std::string> parsedQuestion = splitString(question.questionStirng, '\n');
    int lines = parsedQuestion.size();

    std::sort(inventory.begin(), inventory.end(), [](const Item &a, const Item &b)
    {
        return a.quantity > b.quantity;
    });
    auto inventoryElement = [&inventory](int index) -> std::string 
    {
        return (inventory[index].quantity != 0) ? ("* "s + inventory[index].name) : "";
    };
    auto safeAccess = [&](int index) 
    {
    return (lines > index && index < parsedQuestion.size()) ? parsedQuestion[index] : ""s;
    };

    std::string enemyHealth = std::to_string(enemy.fetchHealth()) + " / "s + std::to_string(enemy.maxHealth);

    // Draw the layout
    std::cout << "+------------------------------------------------------------------------------------------------------------------------------+" << std::endl;
    std::cout << "| " << std::setw(94) << std::left << safeAccess(0) << "| Inventory                    |" << std::endl;
    std::cout << "| " << std::left << std::setw(94) << safeAccess(1) << "| ---------                    |" << std::endl;
    std::cout << "| " << std::left << std::setw(94) << safeAccess(2) << "| " << std::left << std::setw(29) << inventoryElement(0) << "|" << std::endl;
    std::cout << "| " << std::left << std::setw(94) << safeAccess(3) << "| " << std::left << std::setw(29) << inventoryElement(1) << "|" << std::endl;
    std::cout << "| " << std::left << std::setw(94) << safeAccess(4) << "| " << std::left << std::setw(29) << inventoryElement(2) << "|" << std::endl;
    std::cout << "| " << std::left << std::setw(94) << safeAccess(5) << "| " << std::left << std::setw(29) << inventoryElement(3) << "|" << std::endl;
    std::cout << "| " << std::left << std::setw(94) << safeAccess(6) << "| " << std::left << std::setw(29) << inventoryElement(4) << "|" << std::endl;
    std::cout << "| " << std::left << std::setw(94) << safeAccess(7) << "|                              |" << std::endl;
    std::cout << "| " << std::left << std::setw(94) << safeAccess(8) << "+------------------------------|" << std::endl;
    std::cout << "| " << std::left << std::setw(94) << safeAccess(9) << "| Health: " << std::right << std::setw(3) << player.fetchHealth() << " / 100            |" << std::endl;
    std::cout << "| " << std::left << std::setw(94) << safeAccess(10) << "| Armour: " << std::right << std::setw(2) << player.fetchArmor() << " / 50              |" << std::endl;
    std::cout << "| " << std::left << std::setw(94) << safeAccess(11) << "| Enemy: " << std::right << std::setw(3) << (question.questionStirng == "" ? "? / ?" : enemyHealth) << "            |" << std::endl;
    std::cout << "| " << std::left << std::setw(94) << safeAccess(12) << "|                              |" << std::endl;
    std::cout << "|                                                                                               |                              |" << std::endl;
    std::cout << "|                                                                                               |                              |" << std::endl;
    std::cout << "|-----------------------------------------------------------------------------------------------+------------------------------|" << std::endl;
}

void CombatManager::drawNarrative(std::vector<std::string> scene)
{
    for(int i = 0; i < scene.size(); i++)
    {
        playSingleLine(scene[i], 300);
        if(i % 5 == 0)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        }
    }
}

std::vector<std::string> CombatManager::splitString(const std::string &str, char delimiter) 
{
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string item;
    while (std::getline(ss, item, delimiter)) 
    {
        tokens.push_back(item);
    }
    return tokens;
}

bool CombatManager::startFight(Player &player, Enemy &enemy)
{
    while(player.isAlive() && enemy.isAlive())
    {
        // printQuestion(enemy);
        tempQuestion = qm.enemyQuestion(enemy, questionsUsed, questionTiers);
        drawBox(player, enemy, tempQuestion);
        std::cout << "\n Answer: ";
        inputResult fightAnswer = input(player, enemy);

        switch (fightAnswer.status)
        {
            case resultstatus::Correct:
                causeDamage(enemy, 10);
                break;

            case resultstatus::Incorrect:
                takeDamage(player, enemy);
                break;

            case resultstatus::Use:
                bool available = true;
                for(auto &item : player.showInventory())
                {
                    if(fightAnswer.answer == ("USE "s + stringUpper(item.name)) && item.quantity > 0)
                    {
                        useItem(player, enemy, item);
                        available = false;
                        break;
                    }
                }

                if(available)
                    takeDamage(player, enemy);
        }
    }

    if(player.isAlive() && !enemy.isAlive())
        return true;
    else if(!player.isAlive() && enemy.isAlive())
        return false;
}

// void CombatManager::printQuestion(Enemy &enemy)
// {
//     bool encapsulateCode = false;
//     tempQuestion = qm.enemyQuestion(enemy, questionsUsed, questionTiers);
//     for(auto &ch : tempQuestion.questionStirng)
//     {
//         if(ch == '' && !encapsulateCode)
//         {
//             std::cout << "\033[1;45m";
//             encapsulateCode = true;
//         }
//         else if(ch == '' && encapsulateCode)
//         {
//             std::cout << "\033[0m";
//             encapsulateCode = false;
//         }
//         else
//             std::cout << ch;
//     }

//     std::cout << std::endl;
// }

void CombatManager::playDialogue(const std::vector<std::string> &lines, int charDelayMs, int lineDelayMs) 
{
    auto startTime = std::chrono::steady_clock::now(); // Record the start time
    size_t currentLine = 0;
    size_t currentChar = 0;
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
                currentLine++;
                currentChar = 0;
                startTime = std::chrono::steady_clock::now(); // Reset the timer for the new line
            }
        }

        // Allow the program to perform other tasks
        std::this_thread::sleep_for(std::chrono::milliseconds(1)); // Prevent tight CPU loop
    }

    std::cout << std::endl; // Ensure the last line ends properly
}

void CombatManager::playSingleLine(const std::string &line, int charDelayMs) 
{
    playDialogue({line}, charDelayMs, 0); // Pass the single string in a vector
}


void CombatManager::takeDamage(Player &player, Enemy &enemy)
{
    player.takeDamage(enemy.fetchDamage());
}

void CombatManager::causeDamage(Enemy &enemy, int amount)
{
    enemy.takeDamaege(amount);
    std::vector<std::string> hitDialogue = enemy.fetchDialogue().hit;
    if(hitDialogue.size() > 0)
    {
        std::vector<std::string> oneLine;
        oneLine.push_back(hitDialogue[0]);
        playDialogue(oneLine, 100, 1000);
        hitDialogue.erase(hitDialogue.begin());
    }
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

inline CombatManager::inputResult CombatManager::input(Player &player, Enemy &enemy)
{
    std::string answer;
    std::getline(std::cin, answer);
    answer = stringUpper(answer);
    
    if(stringUpper(tempQuestion.answer) == answer)
        return {resultstatus::Correct, answer};
    else if(answer.substr(0, 3) == "USE"s)
        return {resultstatus::Use, answer};
    else
        return {resultstatus::Incorrect, answer};
}

std::string CombatManager::stringUpper(std::string str)
{
    for(auto &ch : str)
    {
        ch = std::toupper(ch);
    }
    return str;
}