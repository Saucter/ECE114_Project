#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include <vector>
#include "Question.h"
#include "Player.h"
#include "Dialogue.h"

class Enemy
{
    private:
        std::string m_name;
        int m_health;
        int m_difficulty;
        int m_rewardTier;
        Dialogue m_dialogue;
        int m_damage;
        std::vector<Enemy> enemyList;

    public:
        Enemy(std::string name, int health, int difficulty, int damage, Dialogue dialogue);
        void takeDamaege(int damage);
        bool isAlive() const;
        int fetchHealth() const;
        void displayInfo() const;
        Question getRandQuestion(std::vector<Question> &questionsList);
        int fetchDifficulty() const;
        int dropItem(Player &player);
        std::vector<Enemy> retrieveEnemy();
        int fetchDamage() const;
};

#endif