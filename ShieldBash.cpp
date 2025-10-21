#include "ShieldBash.h"

void ShieldBash::Activate() {
	PositionDuJoueur();
	std::cout << "le bash va jusqu'a : ";
	DistanceDeBash();
}