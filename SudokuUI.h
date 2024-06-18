#ifndef SUDOKUI_H
#define SUDOKUI_H

#include <vector>
#include <iostream>

using namespace std;

class SudokuUI {
public:
    void displayBoard(const vector<vector<int>>& board);
    void inputBoard(vector<vector<int>>& board);
    void playSudoku();
    void generateAndPlay();
private:
    void clearScreen();
    void printDivider();
    void userPlay(vector<vector<int>>& board);
};

#endif // SUDOKUI_H
