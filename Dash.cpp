#include "Dash.h"
#include "Skill.h"

void Skill::Activate()
{
    PositionDuJoueur();
    std::cout << "Tp le joueur à : " << std::endl;
    DistanceDeBash();
}
