#pragma once
#include "Skill.h"
#include <string>

class ActiveSkill :
    public Skill
{
public:
    std::string name;
    void virtual Activate();

    ActiveSkill(std::string theName) 
    {
        name = theName;
    }
};