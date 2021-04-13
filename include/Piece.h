#include <stdlib.h>
#include <vector>
using namespace std;

class Piece
{
private:
    pair<int, int> position;
    int type;
    int team;
public:
    Piece();
    ~Piece();
    void movePiece(int x, int y);
};