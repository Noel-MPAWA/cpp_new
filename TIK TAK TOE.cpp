#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char currentPlayer = 'X';

void printBoard() {
    cout << "Current board layout: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

}

bool isWinner() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer)
            return true;
        if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)
            return true;
    }
    if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer)
        return true;
    if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)
        return true;

    return false;
}

int main() {
    int choice;
    for (int i = 0; i < 9; i++) {
        printBoard();
        cout << "Player " << currentPlayer << ", choose a position: ";
        cin >> choice;

        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        if (choice < 1 || choice > 9 || board[row][col] == 'X' || board[row][col] == 'O') {
            cout << "Invalid move. Try again." << endl;
            i--;
            continue;
        }


        board[row][col] = currentPlayer;

        if (isWinner()) {
            printBoard();
            cout << "Player " << currentPlayer << " wins!" << endl;
            return 0;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
    printBoard();
    cout << "It's a draw!" << endl;
    return 0;
}
