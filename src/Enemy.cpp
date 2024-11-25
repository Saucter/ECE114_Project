#include <ctime>
#include <random>
#include <fstream>
#include "../include/Enemy.h"
#include "../include/Question.h"

using namespace std::string_literals;

Enemy::Enemy(std::string name, int health, int difficulty, int rewardTier, std::string dialogueFile)
    : m_name(name), m_health(health), m_dialogue(difficulty), m_rewardTier(rewardTier)
{
    // look for dialogueFile corrosponding to name
}

int Enemy::attackPlayer()
{
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
    return fetchHealth();
}

Question Enemy::getRandQuestion(std::vector<Question> &questionsList)
{
    int chosen = rand() % questionsList.size(); 
    Question temp = questionsList[chosen];
    questionsList.erase(questionsList.begin() + chosen);
    return temp;
}

int Enemy::fetchDifficulty()
{
    return m_difficulty;
}