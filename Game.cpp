#include "Game.h"
#include <iostream>

using namespace std;

Game::Game()
{
	p1=new Player(1);
	p2=new Player(2);
	board=new Board(3,3);
	currentPlayer=p1;


}

Game::~Game()
{
	
	delete p1;
	delete p2;
	delete board;
}
bool Game::InsertToBoard(int x,int y)
{
	if(board->GetCell(x,y)==0)
	{
	    this->board->SetCell(x,y,currentPlayer->GetSign());
		return true;
	}
	return false;

	//to do- handle error
}
Player Game:: GetCurrentPlayer()
{
	return *currentPlayer;
}




bool Game:: CheckWin()
{
	return CheckWinDiagonals() || CheckWinCols() || CheckWinRows();
}

	bool Game:: CheckWinDiagonals()
	{
		int sign=currentPlayer->GetSign();
		int cell0_0=board->GetCell(0,0);
		int cell1_1=board->GetCell(1,1);
		int cell2_2=board->GetCell(2,2);
		if(sign==cell0_0 && sign==cell1_1 && sign==cell2_2)
			return true;
		int cell0_2=board->GetCell(0,2);
		int cell2_0=board->GetCell(2,0);
		if(sign==cell0_2 && sign==cell1_1 && sign==cell2_0)
			return true;
		return false;
	}

	bool Game:: CheckWinRows()
	{
		int sign=currentPlayer->GetSign();
		int cell0_0=board->GetCell(0,0);
		int cell0_1=board->GetCell(0,1);
		int cell0_2=board->GetCell(0,2);
		if(sign==cell0_0 && sign==cell0_1 && sign==cell0_2)
			return true;
		int cell1_0=board->GetCell(1,0);
		int cell1_1=board->GetCell(1,1);
		int cell1_2=board->GetCell(1,2);
		if(sign==cell1_0 && sign==cell1_1 && sign==cell1_2)
			return true;
		int cell2_0=board->GetCell(2,0);
		int cell2_1=board->GetCell(2,1);
		int cell2_2=board->GetCell(2,2);
		if(sign==cell2_0 && sign==cell2_1 && sign==cell2_2)
			return true;
	
		return false;

	}
	bool Game:: CheckWinCols()
	{
		int sign=currentPlayer->GetSign();
		int cell0_0=board->GetCell(0,0);
		int cell1_0=board->GetCell(1,0);
		int cell2_0=board->GetCell(2,0);
		if(sign==cell0_0 && sign==cell1_0 && sign==cell2_0)
			return true;

		int cell0_1=board->GetCell(0,1);
		int cell1_1=board->GetCell(1,1);
		int cell2_1=board->GetCell(2,1);

		if(sign==cell0_1 && sign==cell1_1 && sign==cell2_1)
			return true;

	
		int cell0_2=board->GetCell(0,2);
		int cell1_2=board->GetCell(1,2);
		int cell2_2=board->GetCell(2,2);


		if(sign==cell0_2 && sign==cell1_2 && sign==cell2_2)
			return true;
		
		
		
		return false;


	}
	Board* Game:: menu()
	{
		
		
		int rows=board->GetRows();
		int cols=this->board->GetCols();
		Board* temp=new Board(rows,cols);
		for (int i = 0; i < rows; i++)
		{
			for (int j  = 0; j  <cols ; j ++)
			{
				//valid for rows==cols
				temp->SetCell(i,j,i*rows+j+1);

			}
		}
	  return temp;
	}
	Board* Game::GetBoard()
	{
		return board; 

	}
	void Game:: SwitchTurn()
	{
		if (currentPlayer==p1)
			currentPlayer=p2;
		else
			currentPlayer=p1;


	}



