#include "ShieldBash.h"

void Skill::Activate() {
	PositionDuJoueur();
	std::cout << "le bash va jusqu'a : ";
	DistanceDeBash();
}