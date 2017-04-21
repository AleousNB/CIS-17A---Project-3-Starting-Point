#pragma once
#include "Adventurer.h"
#include <string>
class Warrior : public Adventurer
{
private:
	
public:
	Warrior(std::string name, std::string classType);
	~Warrior();

	
	std::string Attack() { return _name + " shouts 'DO YOU LIKE MY SWORD SWORD SWORD MY DIAMOND SWORD!"; }
};

