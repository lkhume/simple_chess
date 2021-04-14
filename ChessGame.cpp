#include "include/Board.h"
#include <thread>
#include <unistd.h>

void showBoard(Board* gameBoard)
{
    while(1)
    {
        gameBoard->printBoard();
        gameBoard->board_change_mutex.lock();
#if __APPLE__
        system("clear");
#else
        system("CLS");
#endif
        gameBoard->board_change_mutex.unlock();
    }
}

int main()
{
    Board * gameBoard = new Board();

    // Clear Terminal
#if __APPLE__
        system("clear");
#else
        system("CLS");
#endif

    thread boardDisplay (showBoard, gameBoard);

    boardDisplay.join();

    return 0;
}