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

    bool lost = false;
    for(auto &fight: enemyList)
    {
        Question noQuestion = {""s, ""s, ""s};
        cm.drawBox(player, fight, noQuestion);
        cm.drawNarrative(fight.fetchDialogue().start);
        bool result = cm.startFight(player, fight);
        if(!result)
        {
            lost = true;
            break;
        }
        cm.drawBox(player, fight, noQuestion);
        cm.drawNarrative(fight.fetchDialogue().end);
    }

    if(lost)
        std::cout << "You suck...";
    else
        std::cout << "Congrats, Struggler!";
    return 0;
}

