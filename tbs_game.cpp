#include <iostream>
#include "monster.h"
#include <string>
using namespace std;


void attack(Monster& attacker, Monster& defender)
{
	int damage = attacker.Atk() - defender.Def();
	if (damage < 0)
	{
		damage = 0;
	}
	defender.hp_ -= damage;//pk sa marche pas avec "HP()" ?
	std::cout << attacker.Name() << " hits " << defender.Name() << " for " << damage << " damage!" << '\n';
	std::cout << defender.Name() << "'s health: " << defender.Hp() << '\n';
}



int main()
{

	Monster dragon1("Nahagliv", 4, 40, 40, 40);
	Monster dragon2("Mulaamnir", 6, 60, 60, 60);
	Monster dragon3("Paarthurnax", 8, 80, 80, 80);
	Monster dragon4("Alduin", 10, 100, 70, 100);


	std::cout << " Welcome to my first TBS Game !" << '\n';

	std::cout << "." << '\n';

	std::cout << " In this game there are 4 dragons." << '\n';

	std::cout << "." << '\n';

	std::cout << " You can chose 2 of them to see who wins in a fight." << '\n';

	std::cout << "." << '\n';

	std::cout << " 1 Nahagliv" << '\n';

	std::cout << " 2 Mulaamnir" << '\n';

	std::cout << " 3 Paarthurnax" << '\n';

	std::cout << " 4 Alduin" << '\n';

	std::cout << "." << '\n';


	int choice1, choice2;


	while (true)
	{
		std::cout << "To chose a dragon you just have to write the corresponding number and press enter." << '\n';

		std::cout << "." << '\n';

		if (std::cin >> choice1)
		{
			if (choice1 >= 1 && choice1 <= 4)
			{
				break;
			}
			else
			{
				std::cout << "Invalid input pls enter a number between 1 and 4" << '\n';
			}
		}
		else
		{
			std::cout << "Invalid input. Please enter a number." << '\n';
			std::cin.clear(); // réinitialise les erreurs
			std::cin.ignore(10000, '\n'); // 
		}
	}
	while (true)
	{
		std::cout << "To chose the second dragon enter a number between 1 and 4 and press enter" << '\n';

		std::cout << "." << '\n';

		if (std::cin >> choice2)
		{
			if (choice2 >= 1 && choice2 <= 4 && choice2 != choice1)
			{
				break;
			}
			else if (choice2 == choice1)
			{
				std::cout << "How can a dragon battle himself? Gotta be stupid to hit himself !" << '\n';
			}
			else
			{
				std::cout << "Invalid choice. Please enter a number between 1 and 4." << '\n';
			}
		}
		else
		{
			std::cout << "Invalid input. Please enter a number." << '\n';
			std::cin.clear();
			std::cin.ignore(10000, '\n');
		}
	}

	std::cout << "Enjoy your fight and have fun!" << '\n';

	std::cout << "." << '\n';


	Monster monsters[4] = { dragon1, dragon2, dragon3, dragon4 };

	Monster attacker = monsters[choice1 - 1];
	Monster defender = monsters[choice2 - 1];

	if (attacker.Speed() > defender.Speed())
	{
		while (attacker.Hp() > 0 && defender.Hp() > 0)
		{
			attack(attacker, defender);


			if (defender.Hp() <= 0) 
			{
				cout << defender.Name() << " has been defeated!" << '\n';
				break;
			}

			attack(defender, attacker);

			if (attacker.Hp() <= 0) 
			{
				cout << attacker.Name() << " has been defeated!" << '\n';
				break;
			}
		}
	}
	else
	{
		while (attacker.Hp() > 0 && defender.Hp() > 0)
		{
			attack(defender, attacker);

			if (attacker.Hp() <= 0)

			{
				cout << attacker.Name() << " has been defeated!" << '\n';
				break;
			}

			attack(attacker, defender);

			if (defender.Hp() <= 0)
			{
				cout << defender.Name() << " has been defeated!" << '\n';
				break;
			}
		}
	}
	return 0;
}