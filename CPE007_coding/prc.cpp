#include <iostream>
#include <vector>
#include <iomanip> // For std::setw

// Function to print the Tic-Tac-Toe board
void drawBoard(const std::vector<char>& board) {
    std::cout << "\n";
    std::cout << "     |     |     \n";
    std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "  \n";
    std::cout << "     |     |     \n";
    std::cout << "\n";
}

// Function to handle player moves
void makeMove(std::vector<char>& board, char player, int move_position) {
    if (move_position >= 1 && move_position <= 9 && board[move_position - 1] != 'X' && board[move_position - 1] != 'O') {
        board[move_position - 1] = player;
    } else {
        std::cout << "Invalid move. Try again.\n";
    }
}

int main() {
    // Initialize the board with numbers for players to choose a square
    std::vector<char> board = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char currentPlayer = 'X';
    int move;

    std::cout << "Welcome to Tic-Tac-Toe!\n";

    // Game loop for 9 moves
    for (int i = 0; i < 9; ++i) {
        drawBoard(board);
        std::cout << "Player " << currentPlayer << ", enter your move (1-9): ";
        std::cin >> move;

        makeMove(board, currentPlayer, move);

        // Switch players for the next turn
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    // Display the final board
    drawBoard(board);
    std::cout << "Game over!\n";

    return 0;
}
