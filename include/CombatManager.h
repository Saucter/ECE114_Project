#ifndef COMBATMANAGER_H
#define COMBATMANAGER_H

#include "Player.h"
#include "Enemy.h"
#include "Item.h"
#include "Dialogue.h"

#include <vector>
#include <string>

class CombatManager
{
    public:
        void startFight(Player &player, Enemy &enemy);
        void playDialogue(const std::vector<std::string>& lines, int charDelayMs, int lineDelayMs);
        void takeDamage(Player &player, Enemy &enemy);
        void causeDamage(Player &player, Enemy &enemy);
        void useItem(Player &player, Item &item);
        bool defeat(Player &player);
        bool victory(Player &player, Enemy &enemy);
        bool input(std::string answer);
};

#endif