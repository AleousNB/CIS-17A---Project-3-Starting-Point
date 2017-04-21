#pragma once
#include <string>
class Adventurer
{
protected:
	std::string _name;
	std::string _classType;
public:
	Adventurer(std::string name, std::string classType);
	~Adventurer();

	std::string GetName() const { return _name; }
	std::string GetClassType() const { return _classType; }
	std::string virtual Attack() {return _name + "punches with fists";}
};

