#include <iostream>
using namespace std;



// Function to print the Tic Tac Toe board
void printBoard(int board[3][3]) {
    cout << "Tic Tac Toe Board:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << " ";
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == 1) {
                cout << "X";
            } else if (board[i][j] == 0) {
                cout << "O";
            } else {
                cout << ".";
            }

            if (j < 2) {
                cout << " | ";
            }
        }
        cout << endl;

        if (i < 2) {
            cout << "---+---+---" << endl;
        }
    }
}

// Function to check for a winner
int checkWinner(int board[3][3]) {
    // Check rows, columns, and diagonals for a winner
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return board[i][0];
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return board[0][i];
        }
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return board[0][2];
    }

    return -1; // No winner yet
}

int main() {
    int board[3][3] = { {-1, -1, -1}, {-1, -1, -1}, {-1, -1, -1} }; // Initialize the board
    int player = 1; // Player 1 starts with X
    int moves = 0;

    while (moves < 9) {
        int row, col;

        cout << "Player " << player << ", enter row (0-2) and column (0-2): ";
        cin >> row >> col;

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != -1) {
            cout << "Invalid move! Try again." << endl;
            continue;
        }

        board[row][col] = player;

        printBoard(board);

        int winner = checkWinner(board);
        if (winner == 1) {
            cout << "Player 1 (X) wins!" << endl;
            break;
        } else if (winner == 0) {
            cout << "Player 0 (O) wins!" << endl;
            break;
        }

        player = 1 - player; // Switch players (1 becomes 0, and 0 becomes 1)
        moves++;
    }

    if (moves == 9) {
        cout << "It's a draw!" << endl;
    }

    return 0;
}