#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe
{
private:
    char board[3][3];
    int moveIndex;

    void showBoard();
    void showInstructions();
    void initialise();
    void declareWinner(int whoseTurn);
    bool rowCrossed();
    bool columnCrossed();
    bool diagonalCrossed();
    bool gameOver();
    int minimax(bool isAI);
    int bestMove(int moveIndex);
    void playTicTacToe(int whoseTurn);

public:
    TicTacToe();
    void startGame();
};

#endif
