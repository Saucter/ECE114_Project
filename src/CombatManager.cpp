#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>

#include "../include/CombatManager.h"
#include "../include/Player.h"
#include "../include/Enemy.h"
#include "../include/Item.h"

void CombatManager::playDialogue(const std::vector<std::string>& lines, int charDelayMs, int lineDelayMs) 
{
    auto startTime = std::chrono::steady_clock::now(); // Record the start time
    size_t currentLine = 0;
    size_t currentChar = 0;
    int threeLines = 0;

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
                // Print the next character
                std::cout << lines[currentLine][currentChar] << std::flush;
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

        if(threeLines == 3)
        {
            std::cout << "\033[2J\033[H"; 
            threeLines = 0;
        }
    }

    std::cout << std::endl; // Ensure the last line ends properly
}

void CombatManager::takeDamage(Player &player, Enemy &enemy)
{
    
}


void CombatManager::causeDamage(Player &player, Enemy &enemy)
{

}