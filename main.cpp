#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <random>

#include "include/Enemy.h"
#include "include/Player.h"
#include "include/Item.h"
#include "include/Question.h"
#include "include/QuestionManager.h"

using namespace std::string_literals;

int main()
{
    srand(time(NULL));
    QuestionManager qm;
    std::vector<Question> questionTiers[5];
    for(int i = 0; i < 5; i++)
        questionTiers[i] = qm.fetchQuestion(i + 1);
    std::vector<std::vector<Question>> questionsUsed(questionTiers, questionTiers + 5);

    Enemy Prof("yes", 2, 1, 2, "oi");
    qm.enemyQuestion(Prof, questionsUsed, questionTiers);
    Prof.getRandQuestion(questionTiers[1]);

    return 0;
}