#pragma once
#include "Adventurer.h"
#include <string>
class Paladin : public Adventurer
{
private:
	
public:
	Paladin(std::string name, std::string classType);
	~Paladin();

	
	std::string Attack() { return _name + " swings a giant maul at his foes!"; }
};

