
#include <iostream>
#include <vector>
#include <string>
#include "Skill.h"
#include "ShieldBash.h"
#include "Grapplin.h"
#include "Dash.h"

std::vector<Skill*> availableSkills{new ShieldBash::Skill("ShieldBase"), new Grapplin::Skill("Grapplin"), new Dash::Skill("Dash") }; //faut mettre les skills ici
std::vector<Skill*> currentSkills{};

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
    for (Skill* skill : availableSkills) {
        std::cout << skill->name << std::endl;
    }
}

void PrintCurrentSkills(){
    std::cout << "List of your current skills" << std::endl << std::endl;
    for (Skill* skill : currentSkills) {
        std::cout << skill->name << std::endl;
    }
}

void AskPlayerChoice() {
    std::getline(std::cin, skillChoice);
}
bool CheckIfChoiceIsValide(std::vector<Skill*> skillList) {
    //auto it = std::find(skillList.begin(), skillList.end(), skillChoice);
    //if (it != skillList.end()) {
    //    return true;
    //}
    return true;
}

void ChoiceNonValide() {
    std::cout << "Choice non valide" << std::endl;
    PrintAvailableSkills();
    AskPlayerChoice();
}

void UseAllCurrentSkills() {
    if (currentSkills.empty()) std::cout << "No skills to use" << std::endl;
    for (Skill* skill : currentSkills) {
        skill->Activate();
    }
}

void PlayerChoice(int whatToDo) {
    if (whatToDo > 2) {
        std::cout << "Error." << std::endl;
        PlayerChoice(AskWhatToDo());
    }
    else if (whatToDo == 0) {
        PrintAvailableSkills();
        std::cout << "Add a skill // ATTENTION EXPLOSION" << std::endl;
        AskPlayerChoice();
        //if (!CheckIfChoiceIsValide(availableSkills)) {
        //    ChoiceNonValide();
        //}
    }
    else if (whatToDo == 1) {
        if (currentSkills.empty()) std::cout << "No skills to remove" << std::endl;
        else {
            PrintCurrentSkills();
            std::cout << "Remove a skill" << std::endl;
            AskPlayerChoice();
            //if (!CheckIfChoiceIsValide(currentSkills)) {
            //    ChoiceNonValide();
            //}
        }
    }
    else {
        UseAllCurrentSkills();
    }
}

int main()
{
    while (true) {
        PlayerChoice(AskWhatToDo());
    }
}
