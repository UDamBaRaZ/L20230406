#include "Slime.h"

class Slime
{
public:
	Slime();
	Slime(char Name);
	Slime(char Name, int move_X, int move_Y);

	virtual void Move(int move_X, int move_Y);
	void Attack(int Damage);

private:
	void HP();
};

void Slime::Move(int move_X, int move_Y)
{

}

void Slime::Attack(int Damage)
{

}