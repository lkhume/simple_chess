#include "include/Board.h"
#include <thread>

void showBoard(Board* gameBoard)
{
    while(1)
    {
        gameBoard->printBoard();
        fflush(stdout);
    }
}

int main()
{
    Board * gameBoard = new Board();

    thread boardDisplay (showBoard, gameBoard);

    boardDisplay.join();

    return 0;
}