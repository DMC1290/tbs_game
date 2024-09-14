#pragma once

class Monster
{

public:
	std::string name_ = "noname";
	int hp_ = 0;
	int atk_ = 0;
	int def_ = 0;
	int speed_ = 0;

	Monster() = default;
	Monster(std::string name, int hp, int atk, int def, int speed);

};