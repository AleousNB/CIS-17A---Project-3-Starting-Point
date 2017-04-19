#pragma once
#include <string>
class Adventurer
{
protected:
	std::string _name;
public:
	Adventurer(std::string name);
	~Adventurer();

	std::string GetName() const { return _name; }
	std::string virtual Attack() {return _name + "punches with fists";}
};

