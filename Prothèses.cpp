
#include <iostream>
#include <vector>
#include "Skill.h"

std::vector<Skill> availableSkills{};
std::vector<Skill> currentSkills{};

void PrintAvailableSkills() {
    for (Skill skill : availableSkills) {
        std::cout << skill << std::endl;
    }
}





int main()
{
    std::cout << "Hello World!\n";
}
