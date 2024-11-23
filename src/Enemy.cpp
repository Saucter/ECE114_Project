#include "Enemy.h"
#include <time.h>
#include <random>
#include <fstream>

Enemy::Enemy(std::string name, int health, int &difficulty, int &rewardTier, std::string dialogueFile)
    : m_name(name), m_health(health), m_dialogue(difficulty), m_rewardTier(rewardTier)
{
    // look for dialogueFile corrosponding to name
}

int Enemy::attackPlayer()
{
    srand(time(NULL));
    return ((rand() % (10 - 5 + 1) + 5) / 10) * m_damageMultiplyer;
}

void Enemy::takeDamaege(int damage)
{
    m_health = ((m_health - damage) < 0) ? 0 : m_health - damage;
    
}

int Enemy::fetchHealth()
{
    return m_health;
}

bool Enemy::isAlive()
{
    return (m_health) ? 1 : 0;
}

std::string Enemy::fetchQuestion(int &difficulty)
{
    
}





 