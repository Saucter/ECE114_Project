#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <random>

#include "include/Enemy.h"
#include "include/Player.h"
#include "include/CombatManager.h"

using namespace std::string_literals;

int main()
{
    srand(time(NULL));
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