#include <iostream>
#include <string>
#include <memory>
#include "Guild.h"
using namespace std;

void DisplayGuildInfo(const shared_ptr<Guild> guild);
void AddAdventurer(const shared_ptr<Guild> guild);
void Attack(const shared_ptr<Guild> guild);

int main() 
{
	cout << "Welcome to the adventure guild simulator." << endl << "Enter a name for your guild: ";
	string name;
	getline(cin, name);
	auto guild = make_shared<Guild>(name);

	int choice = -1;
	while (choice != 0) 
	{
		system("cls");
		cout << "Now Managing " << guild->GetName() << endl << "****************************" << endl;
		cout << "1) Display Guild Information" << endl;
		cout << "2) Add An Adventurer" << endl;
		cout << "3) Attack!" << endl;
		cin >> choice;

		switch (choice) 
		{
		case 1: DisplayGuildInfo(guild); break;
		case 2: AddAdventurer(guild); break;
		case 3: Attack(guild); break;
		default: return 0; break;
		}
	}
	return 0;
}

void DisplayGuildInfo(const shared_ptr<Guild> guild)
{
	system("cls");
	cout << guild->GetInfo();
	system("pause");
}

void AddAdventurer(const shared_ptr<Guild> guild) 
{
	system("cls");

	cout << "Enter a name for your adventurer: ";
	string name;
	cin >> name;

	system("cls");

	cout << "What type of adventurer would you like to add?" << endl;
	cout << "1) Mage" << endl;
	cout << "2) Ranger" << endl;
	cout << "3) Paladin" << endl;
	cout << "4) Warrior" << endl;

	int choice = -1;
	cin >> choice;
	switch (choice)
	{
	case 1: //guild->AddMage(name); break;
			{
				auto character = make_shared<Mage>(name);
				guild->AddAdventurer(character);
				break;
			}
	case 2: //guild->AddRanger(name); break;
			{
				auto character = make_shared<Ranger>(name);
				guild->AddAdventurer(character);
				break;
			}
	case 3: //guild->AddPaladin(name); break;
			{
				auto character = make_shared<Paladin>(name);
				guild->AddAdventurer(character);
				break;
			}
	case 4: //guild->AddWarrior(name); break;
			{
				auto character = make_shared<Warrior>(name);
				guild->AddAdventurer(character);
				break;
			}
	default: cout << "Invalid choice!"; break;
	}
	system("pause");
}

void Attack(const shared_ptr<Guild> guild)
{
	system("cls");

	cout << "1) Attack with mages" << endl;
	cout << "2) Attack with rangers" << endl;
	cout << "3) Attack with warriors" << endl;
	cout << "4) Attack with paladins" << endl;
	cout << "5) Attack with everything!" << endl;

	int choice = -1;
	cin >> choice;

	switch (choice)
	{
	case 1: cout << guild->AttackWithMages() << endl; break;
	case 2: cout << guild->AttackWithRangers() << endl; break;
	case 3: cout << guild->AttackWithWarriors() << endl; break;
	case 4: cout << guild->AttackWithPaladins() << endl; break;
	case 5: cout << guild->AttackWithAllAdventurers() << endl; break;
	default: cout << "You run away like a coward" << endl; break;
	}
	system("pause");
	
}

//Notes for todo;
//get rid of all individual add methods for guild
//in main, all the adds for the case 1-4 do
// void AddAdventurer(shared_ptr<Adventurer> adventurer);

//auto character = make_shared<Mage>(name);
//guild->AddAdventuerr(character)
//extracredit
//ouput display simplify
//attackall simplify

// attack all case 5 is what is required. 
// individual attack (1-4) is extra credit
// output invidual is extra credit
// output all is required?

// potential method for output all is through creating data member
// -called class name and checking it in for loop

//** extra credit for the project3part2 is fixing unable to go back to previous previous file
// possible method of through use of some vector?