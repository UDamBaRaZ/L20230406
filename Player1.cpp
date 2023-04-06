#include "Player.h"

class Player
{
public:
	Player();
	Player(int move_X, int move_Y);

	void Move(int move_X, int move_Y);
	void Attack(int Damage);

private:
	void HP();
	void MP();
};

void Player::Move(int move_X, int move_Y)
{

}

void Player::Attack(int Damage)
{

}