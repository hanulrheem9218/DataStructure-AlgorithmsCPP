#include "tictactoe.h"

void TicTacToe::clearBoard()
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			m_board[i][j] = EMPTY; //player Cell is empty.
		}
	}
	m_currentPlayer = X; //player X starts
}

void TicTacToe::putMark(int i, int j) // mark row i column j 
{
	m_board[i][j] = m_currentPlayer; // mark with current player
	m_currentPlayer = -m_currentPlayer; //switch player
}

bool TicTacToe::isWin(int mark)
{
	int win = 3 * mark;
	return ((m_board[0][0] + m_board[0][1] +  m_board[0][2] == win) ||
		(m_board[1][0] + m_board[1][1] + m_board[1][2] == win) || 
		(m_board[2][0] + m_board[2][1] + m_board[2][2] == win) || 
		(m_board[0][0] + m_board[1][0] + m_board[2][0] == win) || 
		(m_board[0][1] + m_board[1][1] + m_board[2][1] == win) || 
		(m_board[0][2] + m_board[1][2] + m_board[2][2] == win) || 
		(m_board[0][0] + m_board[1][1] + m_board[2][2] == win) || 
		(m_board[2][0] + m_board[1][1] + m_board[0][2] == win));
}

int TicTacToe::getWineer()
{
	if (isWin(X)) return X;
	else if (isWin(O)) return O;
	else return EMPTY;
}

void TicTacToe::printBoard()
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			switch (m_board[i][j]) {
				case 1: std::cout << "X"; break;
				case -1: std::cout << "O"; break;
				case 0: std::cout << " "; break;
			}
			if (j < 2) std::cout << "|";
		}
		if (i < 2) std::cout << "\n-+-+-\n";
	}
}
