#include <iostream>
#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player
{
private:
	int sign;
	int points;

public :
	Player();
	~Player();
	Player(int sign);
	int GetPoints();
	int GetSign();
	void setPoints(int points);
	void SetSign(int sign);


	
};
#endif

