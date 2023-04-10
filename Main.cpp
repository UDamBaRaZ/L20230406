#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "WildBoar.h"

#include <vector>

using namespace std;

//플레이어는 1명 그외 몬스터는 1~3명 소환

int main()
{
	srand((unsigned int)time(0));
	
	//int first = (rand() % 45)
	int Count = (rand() % 3) + 1;
	vector<FGoblin*> Goblins;
	for (int i = 0; i < Count; ++i)
	{
		Goblins.push_back(new FGoblin());
	}

	
	FPlayer* Player = new FPlayer();
	FGoblin* Goblin = new FGoblin();
	FSlime* Slime = new FSlime();
	FWildBoar* WildBoar = new FWildBoar();
	

	
	//player->move();
	//goblin->move();
	//slime->move();
	//wildboar->move();

	delete Player;
	delete Goblin;
	delete Slime;
	delete WildBoar;

	return 0;
}