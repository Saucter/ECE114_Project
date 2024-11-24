#include <vector>
#include <string>
#include <regex>
#include <fstream>
#include <iostream>
#include "../include/Question.h"
#include "../include/Enemy.h"
#include "../include/QuestionManager.h"

using namespace std::string_literals;

std::vector<Question> QuestionManager::fetchQuestion(int difficulty)
{
    std::ifstream file("../assets/attacks/tier"s + std::to_string(difficulty) + ".txt");
    std::string question;
    std::vector<Question> questionList;
    while (std::getline(file, question, '~')) 
        questionList.push_back(splitQuestion(question));

    return questionList;
}

Question QuestionManager::splitQuestion(std::string stringedQuestion)
{
    Question result;
    std::regex rQuestion("^(.*?)\n endl");
    std::regex rChoice("endl (.*?)\n ans:");
    std::regex rAnswer("ans:(.*)$");
    std::smatch match;

    if(std::regex_search(stringedQuestion, match, rQuestion)) 
        result.questionStirng = match[1];

    if(std::regex_search(stringedQuestion, match, rChoice)) 
        result.multipleChoice = match[1];

    if(std::regex_search(stringedQuestion, match, rAnswer)) 
        result.answer = match[1];

    return result;
}

Question QuestionManager::enemyQuestion(Enemy enemy, std::vector<Question> &used, const std::vector<Question> &full)
{
    if(used.size() == 0)
        used = full;
    return enemy.getRandQuestion(used);
}