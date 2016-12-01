#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include "Board.h"

class Game
{
public:
	Game();
	~Game();
	void InitBoard();
	bool InsertToBoard(int x,int y);
	bool CheckWin();
    Board* menu();
	Board* Game::GetBoard();
	Player GetCurrentPlayer();
	void SwitchTurn();
private:
	Board *board;
	Player *p1;
	Player *p2;
	Player *currentPlayer;
	bool CheckWinDiagonals();
	bool CheckWinRows();

	bool CheckWinCols();


};



#endif





