#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <random>
#include <algorithm>
#include <iomanip>
#include <thread>
#include <chrono>

#include "include/Enemy.h"
#include "include/Player.h"
#include "include/CombatManager.h"
#include "include/Item.h"

using namespace std::string_literals;

void drawBox(Player &player, Enemy &enemy);
void drawNarrative(std::vector<std::string> scene, Enemy &enemy);

CombatManager cm;
Player player("Player", 100, 0);
std::vector<Enemy> &enemyList = Enemy::enemyList;
std::vector<std::string> dialogueBar = {""s, ""s, "s", ""s, ""s};

int main()
{
    srand(time(NULL));

    player.addItem(enemyList[2]);
    for(auto &enemy : enemyList)
    {
        drawBox(enemy);
        drawNarrative(enemy.fetchDialogue().start, enemy);
        drawBox(enemy);
    }
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

void drawBox(Enemy &enemy) 
{
    // Clear the screen
    std::cout << "\033[2J\033[H";
    std::vector<Item> inventory = player.showInventory();
    std::sort(inventory.begin(), inventory.end(), [](const Item &a, const Item &b)
    {
        return a.quantity > b.quantity;
    });
    auto inventoryElement = [&inventory](int index) -> std::string 
    {
        return (inventory[index].quantity != 0) ? ("* "s + inventory[index].name) : "";
    };

    // Draw the layout
    std::cout << "+-----------------------------------------------------------------------------------------------------------------------------+" << std::endl;
    std::cout << "|                                                                                              | Inventory                    |" << std::endl;
    std::cout << "|                                                                                              | ---------                    |" << std::endl;
    std::cout << "|                                                                                              | " << std::left << std::setw(29) << inventoryElement(0) << "|" << std::endl;
    std::cout << "|                                                                                              | " << std::left << std::setw(29) << inventoryElement(1) << "|" << std::endl;
    std::cout << "|                                                                                              | " << std::left << std::setw(29) << inventoryElement(2) << "|" << std::endl;
    std::cout << "|                                                                                              | " << std::left << std::setw(29) << inventoryElement(3) << "|" << std::endl;
    std::cout << "|                                                                                              | " << std::left << std::setw(29) << inventoryElement(4) << "|" << std::endl;
    std::cout << "|                                                                                              |                              |" << std::endl;
    std::cout << "|                                                                                              +------------------------------|" << std::endl;
    std::cout << "|                                                                                              | Health: " << std::right << std::setw(3) << player.fetchHealth() << " / 100            |" << std::endl;
    std::cout << "|                                                                                              | Armour: " << std::right << std::setw(2) << player.fetchArmor() << " / 50              |" << std::endl;
    std::cout << "|                                                                                              |                              |" << std::endl;
    std::cout << "|                                                                                              |                              |" << std::endl;
    std::cout << "|                                                                                              |                              |" << std::endl;
    std::cout << "|----------------------------------------------------------------------------------------------+------------------------------|" << std::endl;
}

void drawNarrative(std::vector<std::string> scene, Enemy &enemy)
{
    for(int i = 0; i < scene.size(); i++)
    {
        cm.playSingleLine(scene[i], 200);
        if(i % 5 == 0)
            drawBox(enemy);
    }
}