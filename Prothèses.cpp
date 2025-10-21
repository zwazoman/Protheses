
#include <iostream>
#include <vector>
#include <string>
#include "Skill.h"
#include "ShieldBash.h"

std::vector<Skill> availableSkills{new ShieldBash*}; //faut mettre les skills ici
std::vector<Skill> currentSkills{};

int toDoChoice;
std::string skillChoice;

int AskWhatToDo() {
    std::cout << "What do you want to do" << std::endl << std::endl;
    std::cout << "0 - Equip a skill" << std::endl;
    std::cout << "1 - Undo skill" << std::endl;
    std::cout << "2 - Use current skill" << std::endl;
    std::cin >> toDoChoice;
    return toDoChoice;
}

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
    std::getline(std::cin, skillChoice);
}
bool CheckIfChoiceIsValide(std::vector<Skill> skillList) {
    auto it = std::find(skillList.begin(), skillList.end(), skillChoice);
    if (it != skillList.end()) {
        return true;
    }
    return false;
}

int main()
{
    while (true) {
        PrintAvailableSkills();
        AskWhatToDo();
        AskPlayerChoice();
        if (!CheckIfChoiceIsValide(availableSkills)) {
            std::cout << "Choice non valide" << std::endl;
            PrintAvailableSkills();
            AskPlayerChoice();
        }
    }
}
