#include "include/Board.h"

Board::Board()
{
    // instantiates an 8*8 empty board
    vector<char> row(' ', 8);
    for (int i = 0; i < 8; i++)
    {
        board.push_back(row);
    }
}

Board::~Board() {}

void Board::printBoard()
{
    for (int i = 0; i < 16; i++)
        for (int j = 0; j < 33; j++)
        {
            if (j % 4 == 0) cout << "|";
            else
            {
                if (i % 2 == 0)
                {
                    if (i%4 == 0)
                    {
                        if (j % 8 > 4) cout << '#';
                        else cout << ' ';
                    }
                    else if (i%4 == 2)
                    {
                        if (j % 8 > 4) cout << ' ';
                        else cout << '#';
                    }
                }
                else
                {
                    if (i%4 == 1)
                    {
                        if (j % 8 > 4) cout << '#';
                        else cout << '_';
                    }
                    else if (i%4 == 3)
                    {
                        if (j % 8 > 4) cout << '_';
                        else cout << '#';
                    }
                }
            }
            if (j == 32) cout << endl;
        }
}