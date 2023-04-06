#include "Goblin.h"

class Goblin
{
public:
	Goblin();
	Goblin(char Name);
	Goblin(char Name, int move_X, int move_Y);

	virtual void Move(int move_X, int move_Y);
	void Attack(int Damage);

private:
	void HP();
};

void Goblin::Move(int move_X, int move_Y)
{

}

void Goblin::Attack(int Damage)
{

}