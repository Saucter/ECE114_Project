#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <random>
#include <algorithm>
#include <iomanip>
#include <thread>
#include <chrono>
#include <sstream>

#include "include/Enemy.h"
#include "include/Player.h"
#include "include/CombatManager.h"
#include "include/Item.h"

using namespace std::string_literals;

void drawBox(Enemy &enemy, Question &question);
void drawNarrative(std::vector<std::string> scene, Enemy &enemy);
std::vector<std::string> splitString(const std::string &str, char delimiter);

CombatManager cm;
Player player("Player", 100, 0);
std::vector<Enemy> &enemyList = Enemy::enemyList;
std::vector<std::string> dialogueBar = {""s, ""s, "s", ""s, ""s};

int main()
{
    srand(time(NULL));
    player.addItem(enemyList[2]);
    drawBox(enemyList[0], cm.questionsUsed[0][0]);
    
    


    // bool lost = false;

    // for(auto &fight : enemyList)
    // {
    //     cm.playDialogue(fight.fetchDialogue().start, 100, 1000);
    //     bool result = cm.startFight(player, fight);
    //     if(!result)
    //     {
    //         lost = true;
    //         break;
    //     }
    //     cm.playDialogue(fight.fetchDialogue().end, 100, 1000);
    // }

    // if(lost)
    //     std::cout << "You suck...";
    // else
    //     std::cout << "Congrats, Struggler!";

    return 0;
}

void drawBox(Enemy &enemy, Question &question) 
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
    std::cout << "| " << std::left << std::setw(94) << safeAccess(11) << "|                              |" << std::endl;
    std::cout << "| " << std::left << std::setw(94) << safeAccess(12) << "|                              |" << std::endl;
    std::cout << "|                                                                                               |                              |" << std::endl;
    std::cout << "|                                                                                               |                              |" << std::endl;
    std::cout << "|-----------------------------------------------------------------------------------------------+------------------------------|" << std::endl;
}

void drawNarrative(std::vector<std::string> scene, Enemy &enemy)
{
    for(int i = 0; i < scene.size(); i++)
    {
        cm.playSingleLine(scene[i], 300);
        if(i % 5 == 0)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            Question oi = {"", "", ""};
            drawBox(enemy, oi);
        }
    }
}

std::vector<std::string> splitString(const std::string &str, char delimiter) 
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