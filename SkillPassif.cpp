#include "SkillPassif.h"
#include <iostream>

void SkillPassif::Activate() {
	//SkillPassif::ActivatePassSkill(5,6);
	std::cout << "Voici les buffs passifes de l'upgrade : " << SkillPassif::Buffs << "\n" 
		<< "Voiles Nerfs passifes de l'upgrade : " << SkillPassif::Nerfs << "\n";
}