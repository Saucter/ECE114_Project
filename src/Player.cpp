#include "Player.h"
#include "Item.h"

Player::Player(std::string name, int health, int armor) : m_name(name), m_health(health), m_armor(armor) {}

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

bool Player::isAlive() const
{
    return fetchHealth();
}

void Player::addItem(Item &newItem)
{
    m_inventory.push_back(newItem);
}

void Player::removeItem(Item &usedItem)
{
    m_inventory.erase(m_inventory.begin(), m_inventory.end(), [usedItem](Item used){
        used.name == usedItem.name;
    });
}

std::vector<Item> Player::showInventory()
{
    return m_inventory;
}