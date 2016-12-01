#include <iostream>
#include "Board.h"
#include <sstream>
Board::Board()
{


}
Board::Board(int rows,int cols)
{
	this->cols=cols;
	this->rows=rows;

  mat=new int*[rows];
  for (int i = 0; i < rows; i++)
  {
	  mat[i]=new int[cols];
	  for (int j = 0; j < cols; j++)
	  {
		  mat[i][j]=0;
	  }
  }


}
Board::~Board()
{
	
 for (int i = 0; i < rows; i++)
  {
	 delete[] (mat[i]);  
  }
 delete[] mat; 
}

ostream &operator<<( ostream &output, const Board &Board ) { 

	
	
    char cell='|';
	char newLine='\n';
	
	for (int i = 0; i < Board.rows; i++)
	{
		output<<cell;
		for (int j = 0; j < Board.cols; j++)
		{
			
			//can add condition for sign instead of numbers
			int sign= Board.mat[i][j]	;
			output<<sign;
			output<<cell;
		}
		output<<newLine;
		
	}
	return output;


      }




string Board::BoardToString()
{
	
	stringstream ss;
	//char *tav;
    char cell='|';
	char newLine='\n';
	
	for (int i = 0; i < rows; i++)
	{
		ss<<cell;
		for (int j = 0; j < cols; j++)
		{
			
			//can create string to print better
			// can change int to string better
            char sign= GetCell(i,j)+'0'	;
			ss<<sign;
			ss<<cell;
		}
		ss<<newLine;
		
	}
	return ss.str();
}
int Board:: GetCols()
{
	return cols;

}
int Board:: GetRows()
{
	return rows;

}


int Board:: GetCell(int x,int y)
{
	return mat[x][y];


}
void Board:: SetCell(int x,int y,int sign)
	{
		mat[x][y]=sign;

	}

bool Board::CheckFull()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (mat[i][j]==0)
				return false;
		}

	}
	return true;

}



