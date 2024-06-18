#include "SudokuUI.h"
#include "SudokuSolver.h"
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;


void SudokuUI::printDivider() {
    cout << "+-------+-------+-------+\n";
}

void SudokuUI::displayBoard(const vector<vector<int>>& board) {
    system("CLS");
    for (int i = 0; i < 9; ++i) {
        if (i % 3 == 0) {
            printDivider();
        }
        for (int j = 0; j < 9; ++j) {
            if (j % 3 == 0) {
                cout << "| ";
            }
            if (board[i][j] == 0) {
                cout << ". ";
            } else {
                cout << board[i][j] << " ";
            }
        }
        cout << "|\n";
    }
    printDivider();
}

void SudokuUI::inputBoard(vector<vector<int>>& board) {
    cout << "Enter the Sudoku puzzle (use 0 for empty cells):\n";
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> board[i][j];
        }
    }
}

void SudokuUI::playSudoku() {
    char choice;
    cout << "Choose an option:\n";
    cout << "1. Play the Sudoku\n";
    cout << "2. Watch the computer solve the Sudoku\n";
    cin >> choice;

    vector<vector<int>> board(9, vector<int>(9, 0));
    SudokuSolver solver;

    if (choice == '1') {
        inputBoard(board);
        userPlay(board);
    } else if (choice == '2') {
        inputBoard(board);
        displayBoard(board);
        if (solver.solveSudoku(board)) {
            cout << "\nSolved Sudoku:\n";
            displayBoard(board);
        } else {
            cout << "\nNo solution exists for the given Sudoku!\n";
        }
    } else {
        cout << "Invalid choice. Exiting.\n";
    }
}

void SudokuUI::generateAndPlay() {
    vector<vector<int>> board(9, vector<int>(9, 0));
    SudokuSolver solver;

    solver.generatePuzzle(board);
    char choice;

    while (true)
    {
        displayBoard(board);
        cout << "Choose an option:\n";
        cout << "1. Solve the Sudoku\n";
        cout << "2. Watch the computer solve the Sudoku\n";
        cin >> choice;

        if (choice == '1' || choice == '2')
        {
            break;
        }
        else{
            cout << "Enter a valid input!";
            system("pause");
        }
    }

    if (choice == '1') {
        userPlay(board);
    } else if (choice == '2') {
        if (solver.solveSudoku(board)) {
            cout << "\nSolved Sudoku:\n";
            displayBoard(board);
        } else {
            cout << "\nNo solution exists for the given Sudoku!\n";
        }
    }
}

void SudokuUI::userPlay(vector<vector<int>>& board) {
    int row, col, num;
    char continuePlaying;
    while (true) {
        displayBoard(board);
        cout << "Enter row (0-8), column (0-8), and number (1-9) to place, or -1 to stop:\n";
        cin >> row;
        if (row == -1) break;
        cin >> col >> num;

        if (row >= 0 && row < 9 && col >= 0 && col < 9 && num >= 1 && num <= 9) {
            board[row][col] = num;
        } else {
            cout << "Invalid input, please try again.\n";
        }

        cout << "Continue playing? (y/n): ";
        cin >> continuePlaying;
        if (continuePlaying == 'n' || continuePlaying == 'N') break;
    }
}
