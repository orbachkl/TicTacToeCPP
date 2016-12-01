#include "Player.h"


Player::Player()
{   cout<<"ctor1"<<endl;
	sign=1;
	points=0;

}
Player::Player(int sign)
{
	 cout<<"ctor2"<<endl;
	this->sign=sign;
	points=0;
}
Player::~Player()
{
	
}
int Player::GetPoints()
{
	return points;
}
int Player::GetSign()
{
	return sign;
}
void Player::setPoints(int points)
{
	this->points=points;
}
void Player::SetSign(int sign)
{
	this->sign=sign;
}







