#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include <vector>

class Enemy
{
    private:
        std::string m_name;
        int m_health;
        int m_difficulty;
        int m_rewardTier;
        std::vector<std::string> m_dialogue;
        int m_damageMultiplyer;

    public:
        Enemy(std::string name, int health, int &difficulty, int &m_rewardTier, std::string dialogueFile);
        int attackPlayer();
        void takeDamaege(int damage);
        bool isAlive();
        int fetchHealth();
        void displayInfo();
        std::string getRandQuestion(std::vector<std::string> &questionsList);
};

#endif