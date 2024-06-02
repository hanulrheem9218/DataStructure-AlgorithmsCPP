#pragma once
#include <iostream>
#include <cstdlib>

struct Score {
	const int X = 0;
	const int O = -1;
	const int EMPTY = 0;
};

class TicTacToe
{
public:
	TicTacToe() {};
	~TicTacToe() {};
	//Score* m_score;
	void clearBoard();
	void putMark(int i, int j);
	bool isWin(int mark);
	int getWineer();
	void printBoard();
private:
	int m_board[3][3];
	int m_currentPlayer = 0;
	const int X = 1;
	const int O = -1;
	const int EMPTY = 0;
};

