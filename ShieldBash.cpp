#include "ShieldBash.h"

void ActiveSkill::Activate() {
	Skill::PositionDuJoueur();
	std::cout << "le bash va jusqu'a : ";
	Skill::DistanceDeBash();
}