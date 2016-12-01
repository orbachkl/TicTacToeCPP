#include <string>
#include <iostream>
#ifndef BOARD_H
#define BOARD_H

using namespace std;

class Board{
private:
	int rows;
    int cols;
	int **mat;
	bool isFull;
	
	



public :
	Board();
	Board(int rows,int cols);
	~Board();
	int GetRows();
    int GetCols();
	int GetCell(int x,int y) ;
	void SetCell(int x,int y,int sign);
	string BoardToString();
	friend ostream &operator<<( ostream &output, const Board &Board );
	bool CheckFull();




};

#endif
