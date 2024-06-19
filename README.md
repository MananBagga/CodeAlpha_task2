# CodeAlpha_task2
This is a sudoku solver game with basic terminal GUI. User can either chose to play the game of randomly generated sudoku or ask the computer to solve it.
<hr>
Welcome to the Sudoku Solver and Player project! This application, developed as part of an internship at CodeAlpha, provides a fun and interactive way to solve and play Sudoku puzzles. Users can input their own puzzles, generate random puzzles, and either solve them manually or let the computer solve them.

# Table of Contents
<br>
Project Overview <br>
Features<br>
Technologies Used<br>
Installation and Setup<br>

<br>

# Project Overview
The Sudoku Solver and Player is a console-based application written in C++. It allows users to either input their own Sudoku puzzles or generate random ones. The application then provides options to solve the puzzles either manually or automatically using a backtracking algorithm.

# Features
<br>
Manual Input: Enter your own 9x9 Sudoku puzzle and play or solve it.<br>
Random Puzzle Generation: Generate a random, solvable Sudoku puzzle for a new challenge every time.<br>
Automated Solving: Use the built-in solver to find the solution to any Sudoku puzzle.<br>
Interactive Play: Solve puzzles manually, with helpful console-based UI feedback.<br>
Backtracking Algorithm: Efficiently solve puzzles using a backtracking algorithm.<br>
Dynamic Difficulty: Choose to fill or clear parts of the board to adjust the difficulty.<br>

# Technologies Used
<br>
C++: The core programming language used for this project.
Console Input/Output: For user interaction and displaying the Sudoku grid.
<br>
Installation and Setup
To set up and run the Sudoku Solver and Player on your local machine, follow these steps:

Clone the Repository:

bash
Copy code
<br>
git clone https://github.com/MananBagga/CodeAlpha_task2.git
cd CodeAlpha_task2
Compile the Source Code:<br>
Use a C++ compiler (like g++) to compile the files:

bash
Copy code
g++ -o sudoku_solver main.cpp SudokuSolver.cpp SudokuUI.cpp
Run the Executable:

bash
Copy code
./sudoku_solver
Usage
Start the Application:
Run the compiled executable file.

