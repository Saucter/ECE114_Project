#ifndef QUESTIONMANAGER_H
#define QUESTIONMANAGER_H

#include <vector>
#include <string>
#include "Enemy.h"
#include "Question.h"

class QuestionManager
{
    public:
        std::vector<Question> fetchQuestion(int difficulty);
        Question splitQuestion(std::string stringedQuestion);
        Question enemyQuestion(Enemy enemy, std::vector<Question> &used, const std::vector<Question> &full);
};

#endif