#ifndef SUDOKUSOLVER_H
#define SUDOKUSOLVER_H
using namespace std;

#include <vector>

class SudokuSolver {
public:
    bool solveSudoku(vector<vector<int>>& board);
    void generatePuzzle(vector<vector<int>>& board);
private:
    bool isValid(vector<vector<int>>& board, int row, int col, int num);
    bool solve(vector<vector<int>>& board);
    void fillDiagonal(vector<vector<int>>& board);
    void removeNumbers(vector<vector<int>>& board, int holes);
};

#endif // SUDOKUSOLVER_H
