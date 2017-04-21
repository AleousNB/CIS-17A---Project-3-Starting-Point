#include "Guild.h"

Guild::Guild(std::string name) : _name(name)
{
}

Guild::~Guild()
{
}

/*
void Guild::AddMage(std::string name)
{
	auto magePtr = std::make_shared<Mage>(name);
	_mages.push_back(magePtr);
}

void Guild::AddPaladin(std::string name)
{
	auto paladin = std::make_shared<Paladin>(name);
	_paladins.push_back(paladin);
}

void Guild::AddRanger(std::string name)
{
	auto ranger = std::make_shared<Ranger>(name);
	_rangers.push_back(ranger);
}

void Guild::AddWarrior(std::string name)
{
	auto warrior = std::make_shared<Warrior>(name);
	_warriors.push_back(warrior);
}
*/

void Guild::AddAdventurer(std::shared_ptr<Adventurer> adventurer)
{
	_adventurers.push_back(adventurer);
}


std::string Guild::GetInfo()
{
	std::string output = "Your guild has: \n";
	int Mages = 0;
	int Paladins = 0;
	int Rangers = 0;
	int Warriors = 0;

	for (auto adventurer : _adventurers)
	{
		if (adventurer->GetClassType() == "Mage")
		{
			Mages += 1;
		}
		else if (adventurer->GetClassType() == "Paladin")
		{
			Paladins += 1;
		}
		else if (adventurer->GetClassType() == "Ranger")
		{
			Rangers += 1;
		}
		else if (adventurer->GetClassType() == "Warrior")
		{
			Warriors += 1;
		}
	}
	
	output += Mages		> 0 ? std::to_string(Mages) + " mages\n" : "No mages!\n";
	output += Rangers	> 0 ? std::to_string(Rangers) + " rangers\n" : "No rangers!\n";
	output += Warriors	> 0 ? std::to_string(Warriors) + " warriors\n" : "No warriors!\n";
	output += Paladins	> 0 ? std::to_string(Paladins) + " paladins\n" : "No paladins!\n";
	
	return output;
}


std::string Guild::AttackWithMages()
{
	std::string output = "You command your mages to attack! \n";
	if (_adventurers.size() > 0) {
		for (auto adventurer : _adventurers) {
			if (adventurer->GetClassType() == "Mage")
			{
				output += adventurer->Attack() + "\n";
			}
		}
	}
	return output;
}

std::string Guild::AttackWithPaladins()
{
	std::string output = "You command your paladins to attack! \n";
	if (_adventurers.size() > 0) {
		for (auto adventurer : _adventurers) {
			if (adventurer->GetClassType() == "Paladin")
			{
				output += adventurer->Attack() + "\n";
			}
		}
	}
	return output;
}
/*
std::string Guild::AttackWithPaladins()
{
	std::string output = "You command your paladins to attack! \n";
	if (_paladins.size() > 0) {
		for (auto paladin : _paladins) {
			output += paladin->Attack() + "\n";
		}
	}
	return output;
}
*/

std::string Guild::AttackWithRangers()
{
	std::string output = "You command your rangers to attack! \n";
	if (_adventurers.size() > 0) {
		for (auto adventurer : _adventurers) {
			if (adventurer->GetClassType() == "Ranger")
			{
				output += adventurer->Attack() + "\n";
			}
		}
	}
	return output;
}

std::string Guild::AttackWithWarriors()
{
	std::string output = "You command your warriors to attack! \n";
	if (_adventurers.size() > 0) {
		for (auto adventurer : _adventurers) {
			if (adventurer->GetClassType() == "Warrior")
			{
				output += adventurer->Attack() + "\n";
			}
		}
	}
	return output;
}

std::string Guild::AttackWithAllAdventurers()
{
	std::string output = "You command everyone to attack! \n";
	output += AttackWithMages();
	output += AttackWithPaladins();
	output += AttackWithRangers();
	output += AttackWithWarriors();
	return output;
}