#include <tuple>
#include <QVector>

class Board {
private:
    QVector<QVector<int>> gameBoard; // 2D array representing the game board
    QVector<std::tuple<int, int>> chutes; // Vector of tuples for chute start and end points
    QVector<std::tuple<int, int>> ladders; // Vector of tuples for ladder start and end points

public:
    Board();
    void generateRandomBoard();
    bool isChuteOrLadder(int tile) const;
    int getDestination(int tile) const;
};
