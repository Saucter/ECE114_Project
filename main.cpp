#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <random>
#include <algorithm>
#include <iomanip>

#include "include/Enemy.h"
#include "include/Player.h"
#include "include/CombatManager.h"
#include "include/Item.h"

using namespace std::string_literals;

void drawBox(Player &player, Enemy &enemy);

CombatManager cm;

int main()
{
    srand(time(NULL));

    Player player("Player", 100, 0);
    std::vector<Enemy> &enemyList = Enemy::enemyList;
    drawBox(player, enemyList[0]);
    std::vector<std::string> oi = {"oii"s, "testing if this is going to work"s};
    cm.playSingleLine("testing this"s, 100);
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

void drawBox(Player &player, Enemy &enemy) 
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
    std::cout << "+----------------------------------------------------------------------------------------------+" << std::endl;
    std::cout << "|                                                               | Inventory                    |" << std::endl; // Top-left box (empty)
    std::cout << "|                                                               | ---------                    |" << std::endl;
    std::cout << "|                                                               | " << std::left << std::setw(29) << inventoryElement(0) << "|" << std::endl;
    std::cout << "|                                                               | " << std::left << std::setw(29) << inventoryElement(1) << "|" << std::endl;
    std::cout << "|                                                               | " << std::left << std::setw(29) << inventoryElement(2) << "|" << std::endl;
    std::cout << "|                                                               | " << std::left << std::setw(29) << inventoryElement(3) << "|" << std::endl;
    std::cout << "|                                                               | " << std::left << std::setw(29) << inventoryElement(4) << "|" << std::endl;
    std::cout << "|                                                               |                              |" << std::endl;
    std::cout << "|                                                               +------------------------------|" << std::endl;
    std::cout << "|                                                               | Health: " << std::right << std::setw(3) << player.fetchHealth() << " / 100            |" << std::endl;
    std::cout << "|                                                               | Armour: " << std::right << std::setw(2) << player.fetchArmor() << " / 50             |" << std::endl;
    std::cout << "|                                                               |                              |" << std::endl;
    std::cout << "|                                                               |                              |" << std::endl;
    std::cout << "|                                                               |                              |" << std::endl;
    std::cout << "|---------------------------------------------------------------|------------------------------|" << std::endl;
    std::cout << "|                                                                                              |" << std::endl;
}

// void drawNarrative(Enemy &enemy)
// {
//     cm.playDialogue()
// }

