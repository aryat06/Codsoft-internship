#Tic-tac-toe Game

#include <iostream>
using namespace std;

// Function to draw the Tic-Tac-Toe board
void drawBoard(char board[3][3]) {
    cout << "-------------\n";
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << "\n-------------\n";
    }
}

// Function to check if a player has won
bool checkWin(char board[3][3], char player) {
	
	// check rows, columns and diagonals
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;
    return false;
}

int main() {
	// initializse the board and players
    char board[3][3] = { { ' ', ' ', ' ' }, { ' ', ' ', ' ' }, { ' ', ' ', ' ' } };
    char currentPlayer = 'X';

    cout << "Welcome to Tic-Tac-Toe!\n";
    cout << "Player 1: X | Player 2: O\n";
    
    // game loop

    for (int turn = 0; turn < 9; turn++) {
        int row, col;
        cout << "Current board:\n";
        // draw the board 
        drawBoard(board);
        cout << "Player " << currentPlayer << ", enter row (0-2) and column (0-2): ";
        cin >> row >> col;

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "Invalid move! Try again.\n";
            turn--;
            continue;
        }

        board[row][col] = currentPlayer;
        if (checkWin(board, currentPlayer)) {
            cout << "Player " << currentPlayer << " wins!\n";
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    if (checkWin(board, 'X') || checkWin(board, 'O'))
        cout << "Congratulations!\n";
    else
        cout << "It's a draw!\n";

    return 0;
}
