#include <stdlib.h>
#include <vector>
#include <iostream>
using namespace std;
class Board
{
    vector< vector<char> > board;
    public:
    Board();
    ~Board();
    void printBoard();
};