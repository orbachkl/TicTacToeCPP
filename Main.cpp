#include <iostream>
#include <string>
#include "Board.h"
#include "Player.h"
#include "Game.h"

using namespace std;



void main()
{
	Game g;
	cout<<*g.GetBoard()<<endl;
	bool winFlag;
	bool fullBoardFlag;
	bool insertSucceed;
	int choice;
	int x,y;
	Player playerNum=g.GetCurrentPlayer();
	
	do{
		playerNum=g.GetCurrentPlayer();
		do{
		cout<<"player number "<<playerNum.GetSign() <<" choose an option according the numbers"<<endl;
		cout<<*g.menu()<<endl;
		cin>>choice;
		
		switch (choice)
		{
		case 1:
			x=0;
			y=0;

			break;
		case 2:
			x=0;
			y=1;
			break;
		case 3:
			x=0;
			y=2;
			break;
		case 4:
			x=1;
			y=0;
			break;
		case 5:
			x=1;
			y=1;
			break;
		case 6:
			x=1;
			y=2;
			break;
		case 7:
			x=2;
			y=0;
			break;
		case 8:
			x=2;
			y=1;
			break;
		case 9:
			x=2;
			y=2;
			break;
		default:
			break;
		}
		
		
		  insertSucceed= g.InsertToBoard(x,y);
		}while(!insertSucceed);

		
		cout<<*g.GetBoard()<<endl;
		winFlag=g.CheckWin();
		fullBoardFlag=(*g.GetBoard()).CheckFull();
		g.SwitchTurn();
		
	}while(!winFlag && !fullBoardFlag);
	cout<< "the end of the game!"<<endl;
	cout<< "the final board is:"<<endl;
	cout<<*g.GetBoard()<<endl;
	if(winFlag)
	{

		cout<<"the winner is player number "<<playerNum.GetSign()<<endl;

	}
	else if (fullBoardFlag)
	{
		cout<<"tie!!"<<endl;

	}




}










