#include "Grapplin.h"

void Grapplin::Activate() {
	Skill::PositionDuJoueur();
	std::cout << "le grappin va tirer vers : ";
	Skill::ForceDuGrappin();
}