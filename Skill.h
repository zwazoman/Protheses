#pragma once
#include <iostream>

class Skill
{
public :
	std::string name;

public :
	virtual void Activate();

protected :
	void PositionDuJoueur() {};
	void DistanceDeBash() {};
	void ForceDuGrappin() {};
};

