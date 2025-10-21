#pragma once
#include "Skill.h"
#include <string>

class ActiveSkill :
    public Skill
{
public:
    std::string name;

    ActiveSkill(std::string theName) 
    {
        name = theName;
    }
};