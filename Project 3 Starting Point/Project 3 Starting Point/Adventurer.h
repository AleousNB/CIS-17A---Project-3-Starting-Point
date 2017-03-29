#pragma once
class Adventurer
{
private:
	std::string _name;
public:
	Adventurer();
	~Adventurer();

	std::string GetName() const { return _name; }
	std::string virtual Attack() {return _name + "punches with fists";}
};

