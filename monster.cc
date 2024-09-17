#include <iostream>
#include "monster.h"




Monster::Monster(std::string name, int speed, int hp, int def, int atk) :
	name_(name),
	speed_(speed),
	hp_(hp),
	def_(def),
	atk_(atk)
{

}