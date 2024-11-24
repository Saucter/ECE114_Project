#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#include "include/Enemy.h"
#include "include/Player.h"
#include "include/Item.h"

using namespace std::string_literals;

std::string fetchQuestion(std::vector<std::string> &questionsList, int difficulty);

int main()
{
    return 1;
}

std::string fetchQuestion(std::vector<std::string> &questionsList, int difficulty)
{
    std::ifstream file("../assets/attacks/tier"s + std::to_string(difficulty) + ".txt");
    std::string question;
    for(int i = 0; i < (rand() % 10); i++)
    {
        if(!std::getline(file, question, '~')) 
            break;
        else
            questionsList.push_back(question);
    }
}