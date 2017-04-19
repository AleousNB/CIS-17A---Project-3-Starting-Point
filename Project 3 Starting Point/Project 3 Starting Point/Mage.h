#pragma once
#include "Adventurer.h"
#include <string>
class Mage : public Adventurer
{
private:
	
public:
	Mage(std::string name);
	~Mage();

	
	std::string Attack() { return _name + " casts magic missle at the darkness!"; }	
};

