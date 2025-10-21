
#include <iostream>
#include <vector>
#include <string>
#include "Skill.h"

std::vector<Skill> availableSkills{};
std::vector<Skill> currentSkills{};

std::string playerChoice;

void PrintAvailableSkills() {
    std::cout << "List of available skills" << std::endl << std::endl;
    for (Skill skill : availableSkills) {
        std::cout << skill.name << std::endl;
    }
}

void PrintCurrentSkills(){
    std::cout << "List of your current skills" << std::endl << std::endl;
    for (Skill skill : currentSkills) {
        std::cout << skill.name << std::endl;
    }
}

void AskPlayerChoice() {
    std::getline(std::cin, playerChoice);
}
bool CheckIfChoiceIsValide(std::vector<Skill> skillList) {
    auto it = std::find(skillList.begin(), skillList.end(), playerChoice);
    if (it != skillList.end()) {
        return true;
    }
    return false;
}





int main()
{
    while (true) {
        PrintAvailableSkills();
        AskPlayerChoice();
        if (!CheckIfChoiceIsValide(availableSkills)) {
            std::cout << "Choice non valide" << std::endl;
            PrintAvailableSkills();
            AskPlayerChoice();
        }
    }
    std::cout << "Hello World!\n";
}
