#include "SudokuUI.h"
#include "SudokuSolver.cpp"
#include "SudokuSolver.h"
#include "SudokuUI.cpp"
#include "SudokuUI.h"
using namespace std;

int main() {
    SudokuUI ui;
    char choice;

    cout << "Welcome to Sudoku Solver and Player!\n";
    cout << "Choose an option:\n";
    cout << "1. Input your own Sudoku puzzle\n";
    cout << "2. Generate a random Sudoku puzzle\n";
    cin >> choice;

    if (choice == '1') {
        ui.playSudoku();
    } else if (choice == '2') {
        ui.generateAndPlay();
    } else {
        cout << "Invalid choice. Exiting.\n";
    }

    return 0;
}
