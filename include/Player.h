#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Item.h"

class Player
{
    private:
        std::string m_name;
        int m_health;
        int m_armor;
        std::vector<Item> m_inventory;

    public:
        Player(std::string name, int health, int armor);
        void takeDamage(int damage);
        int fetchHealth() const;
        bool isAlive() const;
        void heal(int amount);
        void shield(int amount);
        std::string addItem(const Enemy &enemy);
        void removeItem(Item &usedItem);
        std::vector<Item> showInventory();
};

#endif