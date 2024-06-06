#include "tictactoe.h"
int main()
{
    TicTacToe* game = new TicTacToe();
    game->clearBoard();
    game->putMark(0, 0);
    game->putMark(1, 1);
    game->putMark(0, 1);
    game->putMark(0, 2);
    game->putMark(2, 0);
    game->putMark(1, 2);
    game->putMark(2, 2);
    game->putMark(2, 1);
    game->putMark(1, 0);
    game->printBoard();
    int* winner = new int;
    *winner  = game->getWineer();
      if (*winner != 0) {
          std::cout << " " << (*winner == 1 ? 'X' : 'O') << " wins" << std::endl;
    }
      else {
          std::cout << "Tie" << std::endl;
      }
    return 0;
}

