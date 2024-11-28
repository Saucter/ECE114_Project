#include <ctime>
#include <random>
#include <fstream>
#include <vector>
#include <iostream>
#include "../include/Enemy.h"
#include "../include/Question.h"
#include "../include/Dialogue.h"
#include "../include/EnemyDialogue.h"

using namespace std::string_literals;

Enemy::Enemy(std::string name, int health, int difficulty, int damage, Dialogue dialogue)
    : m_name(name), m_health(health), m_difficulty(difficulty), m_damage(damage), m_dialogue(dialogue)
{
    m_rewardTier = difficulty;
    maxHealth = m_health;
}

std::vector<Enemy> Enemy::enemyList = 
{
    Enemy("Security Guard", 20, 0, 5, SecurityGuard),
    Enemy("IT Admin", 30, 0, 8, ITAdmin),
    Enemy("Vending Machine", 40, 1, 15, VendingMachine),
    Enemy("TAs", 50, 2, 18, TAs),
    Enemy ("ECE Coordinator", 60, 2, 18, Coordinator),
    Enemy("Ghost of Dennis Ritchie", 70, 3, 25, GhostOfRitchie),
    Enemy("Professor's Cat", 85, 3, 30, ProfessorsCat),
    Enemy("Professor Lee", 100, 4, 35, ProfessorLee)
};

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
    if(questionsList.empty())
    {
        std::cout << "Empty...";
        Question oi = {""s, ""s, ""s};
        return oi;
    }
    else
    {
        int chosen = rand() % questionsList.size(); 
        Question temp = questionsList[chosen];
        questionsList.erase(questionsList.begin() + chosen);
        return temp;
    }
}

int Enemy::fetchDifficulty() const
{
    return m_difficulty;
}

std::vector<Enemy> Enemy::retrieveEnemy()
{
    return enemyList;
}

int Enemy::fetchDamage() const
{
    return m_damage;
}

Dialogue Enemy::fetchDialogue() const
{
    return m_dialogue;
}

