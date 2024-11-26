#ifndef COMBATMANAGER_H
#define COMBATMANAGER_H

#include "Player.h"
#include "Enemy.h"
#include "Item.h"
#include "Dialogue.h"
#include "Question.h"

#include <vector>
#include <string>

class CombatManager
{
    public:
        CombatManager();
        void startFight(Player &player, Enemy &enemy);
        void playDialogue(const std::vector<std::string>& lines, int charDelayMs, int lineDelayMs);
        void takeDamage(Player &player, Enemy &enemy);
        void causeDamage(Enemy &enemy, int amount);
        void useItem(Player &player, Enemy &enemy, Item &item);
        bool result(Player &player, Enemy &enemy);
        inline bool input(Enemy &enemy);
};

#endif