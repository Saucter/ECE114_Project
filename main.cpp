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
        std::string placeHolder;
        cm.playSingleLine("For best experience: Play on full screen!", 250);
        cm.playSingleLine("For best experience: Use your machine's terminal, not VSC's!", 250);
        cm.playSingleLine("Press enter to continue", 250);
        std::cin.get();

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
    {
        std::cout << "\033[2J\033[H";
        cm.playSingleLine("YOU DIED", 500);
    }
    else
    {
        std::cout << "\033[2J\033[H";
        cm.playSingleLine("Congrats, Struggler. Assignment complete!", 500);
    }
    return 0;
}

