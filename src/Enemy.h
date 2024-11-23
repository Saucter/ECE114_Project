#ifndef ENEMY_H
#define ENEMY_H

#include <string>

class Enemy
{
    private:
        std::string m_name;
        int m_health;
        int *m_difficulty;
        int *m_reward;

    public:
        void attackPlayer();
        void takeDamaege();
        int fetchHealth();
        void displayInfo(std::string &name, int &health, int &difficulty);
        std::string fetchQuestion(int &difficulty);
};

#endif