#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <random>

#include "include/Enemy.h"
#include "include/Player.h"
#include "include/CombatManager.h"

using namespace std::string_literals;
void drawBox();

int main()
{
    srand(time(NULL));

    drawBox();
    CombatManager cm;
    Player player("Player", 100, 0);
    std::vector<Enemy> &enemyList = Enemy::enemyList;
    bool lost = false;

    for(auto &fight : enemyList)
    {
        cm.playDialogue(fight.fetchDialogue().start, 100, 1000);
        bool result = cm.startFight(player, fight);
        if(!result)
        {
            lost = true;
            break;
        }
        cm.playDialogue(fight.fetchDialogue().end, 100, 1000);
    }

    if(lost)
        std::cout << "You suck...";
    else
        std::cout << "Congrats, Struggler!";

    return 0;
}

void drawBox(Player &player, Enemy &enemy) 
{
    // Clear the screen
    std::cout << "\033[2J\033[H";

    // Draw the layout
    std::cout << "+---------------------------------------------------------------------------------------------+" << std::endl;
    std::cout << "|                                                               | Inventory                   |" << std::endl; // Top-left box (empty)
    std::cout << "|                                                               | ---------                   |" << std::endl;
    std::cout << "|                                                               | " << std::endl;
    std::cout << "|                |               |                 |" << std::endl; // Mid-row boxes
    std::cout << "|                |               s|                 |" << std::endl;
    std::cout << "+----------------+               +-----------------+" << std::endl;
    std::cout << "                  Health: 100/100    Shield: 0/50   " << std::endl; // Example labels
    std::cout << "+--------------------------------------------------+" << std::endl;
    std::cout << "|                                                  |" << std::endl; // Bottom full-width box
    std::cout << "|                                                  |" << std::endl;
    std::cout << "|                                                  |" << std::endl;
    std::cout << "+--------------------------------------------------+" << std::endl;
}