#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <regex>

#include "include/Enemy.h"
#include "include/Player.h"
#include "include/Item.h"
#include "include/Question.h"
#include "include/QuestionManager.h"

using namespace std::string_literals;

std::vector<Question> fetchQuestion(int difficulty);
Question splitQuestion(std::string stringedQuestion);


int main()
{
    QuestionManager qm;
    std::vector<Question> questionTiers[5];
    for(int i = 0; i < 5; i++)
        questionTiers[i] = qm.fetchQuestion(i);
    std::vector<std::vector<Question>> questionsUsed(questionTiers, questionTiers + 5);

    Enemy Prof("yes", 2, 1, 2, "oi");
    Prof.getRandQuestion(questionTiers[1]);

    return 1;
}