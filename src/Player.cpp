#include "../include/Player.h"
#include "../include/Item.h"
#include "../include/Enemy.h"

Player::Player(std::string name, int health, int armor) : m_name(name), m_health(health), m_armor(armor) 
{
    m_inventory.assign(
    {
    // Tier 1
    Item("Syntax Patch", "heal", 1),
    Item("Debug Barrier", "block", 1),
    Item("Stack Overflow", "damage", 1),

    // Tier 2
    Item("Git Revert", "heal", 2),
    Item("Firewall", "block", 2),
    Item("Segfault", "damage", 2),

    // Tier 3
    Item("Recovery Kernel", "heal", 3),
    Item("Quantum Shield", "block", 3),
    Item("Kernel Panic", "damage", 3)
    });

}

void Player::takeDamage(int damage)
{
    m_health =  ((m_health - damage) < 0) ? 0 : m_health - damage;
}

void Player::heal(int amount) 
{
    m_health = ((m_health + amount) > 100) ? 100 : m_health + amount;
}

void Player::shield(int amount)
{
    m_armor = ((m_armor + amount) > 50) ? 50 : m_armor + amount;
}

int Player::fetchHealth() const
{
    return m_health;
}

int Player::fetchArmor() const
{
    return m_armor;
}

bool Player::isAlive() const
{
    return fetchHealth();
}

std::string Player::addItem(const Enemy &enemy)
{
    const size_t maxInvetorySize = 5;
    if(m_inventory.size() == maxInvetorySize)
    {
        return "Your inventory is full";
    }

    int randDrop = rand() % 3;
    int tierIteration = 0;
    for(Item &content : m_inventory)
    {
        if(content.tier == enemy.fetchDifficulty() + 1)
        {
            if(tierIteration == randDrop)
            {
                content.quantity += 1;
                return "";
            }
                tierIteration++;
        }
    }
    
    return "Unexpected error: No item added.";
}

void Player::removeItem(Item &usedItem)
{
    if(usedItem.quantity > 0)
        usedItem.quantity -= 1;
}

std::vector<Item> Player::showInventory()
{
    return m_inventory;
}