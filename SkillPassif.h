#pragma once
#include "Skill.h"
class SkillPassif : public Skill
{
public :
	int Buffs{ 0 };
	int Nerfs{ 0 };

	ActivatePassSkill(int Buff,int Nerf) 
	{
		Buffs = Buff;
		Nerfs = Nerf;
	}
};


