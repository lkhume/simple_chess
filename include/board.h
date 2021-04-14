#include <stdlib.h>
#include <vector>
#include <iostream>
#include <mutex>
using namespace std;
class Board
{
    vector< vector<char> > board;
    public:
    mutex board_change_mutex;
    Board();
    ~Board();
    void printBoard();
};