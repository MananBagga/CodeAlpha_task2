#include "SudokuSolver.h"
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

bool SudokuSolver::isValid(vector<vector<int>>& board, int row, int col, int num) {
    for (int x = 0; x < 9; x++) {
        if (board[row][x] == num || board[x][col] == num ||
            board[row/3*3 + x/3][col/3*3 + x%3] == num) {
            return false;
        }
    }
    return true;
}

bool SudokuSolver::solve(vector<vector<int>>& board) {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            if (board[row][col] == 0) {
                for (int num = 1; num <= 9; num++) {
                    if (isValid(board, row, col, num)) {
                        board[row][col] = num;
                        if (solve(board)) return true;
                        board[row][col] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

bool SudokuSolver::solveSudoku(vector<vector<int>>& board) {
    return solve(board);
}

void SudokuSolver::fillDiagonal(vector<vector<int>>& board) {
    for (int i = 0; i < 9; i += 3) {
        vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        random_shuffle(nums.begin(), nums.end());
        for (int j = 0; j < 9; j++) {
            board[i + j / 3][i + j % 3] = nums[j];
        }
    }
}

void SudokuSolver::generatePuzzle(vector<vector<int>>& board) {
    srand(time(0));
    board = vector<vector<int>>(9, vector<int>(9, 0));

    fillDiagonal(board);
    solve(board);
    removeNumbers(board, 40); 
}

void SudokuSolver::removeNumbers(vector<vector<int>>& board, int holes) {
    int count = holes;
    while (count != 0) {
        int cellId = rand() % 81;
        int row = cellId / 9;
        int col = cellId % 9;
        if (board[row][col] != 0) {
            board[row][col] = 0;
            --count;
        }
    }
}
