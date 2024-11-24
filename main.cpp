#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#include "include/Enemy.h"
#include "include/Player.h"
#include "include/Item.h"
#include "include/Question.h"

using namespace std::string_literals;

void fetchQuestion(std::vector<std::string> &questionsList, int difficulty);

int main()
{
    std::vector<Question> *questionTiers = new std::vector<Question>[5];
    for(int i = 0; i < 5; i++)
        
    return 1;
}

std::vector<Question> fetchQuestion(int difficulty)
{
    std::ifstream file("../assets/attacks/tier"s + std::to_string(difficulty) + ".txt");
    std::string question;
    std::vector<Question> questionList;
    while (std::getline(file, question, '~')) 
        questionList.push_back(splitQuestion(question));

    return questionList;
}

Question splitQuestion(std::string stringedQuestion)
{
    
}