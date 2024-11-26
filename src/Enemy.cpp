#include <ctime>
#include <random>
#include <fstream>
#include <vector>
#include "../include/Enemy.h"
#include "../include/Question.h"
#include "../include/Dialogue.h"
#include "../include/EnemyDialogue.h"

using namespace std::string_literals;

Enemy::Enemy(std::string name, int health, int difficulty, Dialogue dialogue)
    : m_name(name), m_health(health), m_difficulty(difficulty), m_dialogue(dialogue)
{
    m_rewardTier = difficulty;
}

std::vector<Enemy> enemyList = 
{
    Enemy("Security Guard", 20, 1, SecurityGuard),
    Enemy("IT Admin", 30, 1, ITAdmin),
    Enemy("Vending Machine", 40, 2, VendingMachine),
    Enemy("TAs", 50, 3, TAs),
    Enemy ("ECE Coordinator", 60, 3, Coordinator),
    Enemy("Ghost of Dennis Ritchie", 70, 4, GhostOfRitchie),
    Enemy("Professor's Cat", 85, 4, ProfessorsCat),
    Enemy("Professor Lee", 100, 5, ProfessorLee)
};

int Enemy::attackPlayer()
{
    return ((rand() % (10 - 5 + 1) + 5) / 10) * m_damageMultiplyer;
}

void Enemy::takeDamaege(int damage)
{
    m_health = ((m_health - damage) < 0) ? 0 : m_health - damage;
    
}

int Enemy::fetchHealth() const
{
    return m_health;
}

bool Enemy::isAlive() const
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

int Enemy::fetchDifficulty() const
{
    return m_difficulty;
}

std::vector<Enemy> Enemy::retrieveEnemy()
{
    return enemyList;
}