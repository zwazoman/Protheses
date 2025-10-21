#include "Dash.h"

void Skill::Activate()
{
    PositionDuJoueur();
    std::cout << "Tp le joueur à : " << std::endl;
    DistanceDeBash();
}