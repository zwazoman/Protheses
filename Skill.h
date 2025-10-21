#pragma once
#include <iostream>

class Skill
{
public :
	std::string name;

public :
	virtual void Activate() = 0;

protected :
	void PositionDuJoueur() {};
	void DistanceDeBash() {};
};

