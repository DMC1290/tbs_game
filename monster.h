#pragma once
#ifndef MONSTER_H
#define MONSTER_H
#include "fight.h"

// Demander au prof pk je doit mettre "class" et "public" pour que sa marche et pas "struct" et "priver"
class Monster
{

public: // ne marche pas en privé????????!!!!!!!!
	std::string name_ = "no name";
	int speed_ = 0;
	int hp_ = 0;
	int def_ = 0;
	int atk_ = 0;

public:
	Monster() = default;
	Monster(std::string name, int speed, int hp, int def, int atk);
	std::string Name() { return name_; }
	int Speed() { return speed_; }
	int Hp() { return hp_; }
	int Def() { return def_; }
	int Atk() { return atk_; }
};
#endif