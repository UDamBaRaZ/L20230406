#include "WildBoar.h"

class WildBoar
{
public:
	WildBoar();
	WildBoar(char Name);
	WildBoar(char Name, int move_X, int move_Y);

	virtual void Move(int move_X, int move_Y);
	void Attack(int Damage);

private:
	void HP();
};

void WildBoar::Move(int move_X, int move_Y)
{

}

void WildBoar::Attack(int Damage)
{

}