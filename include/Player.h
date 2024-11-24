#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Item.h"

class Player
{
    private:
        std::string name;
        int m_health;
        int m_armor;
        std::vector<Item> m_inventory;

    public:
        void takeDamaeg(int damage);
        void heal(int amount);
        void addItem(Item newItem);
        void showInventory() const;
};  

#endif