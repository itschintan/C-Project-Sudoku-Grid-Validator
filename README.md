# COC Project-Sudoku Grid Validator
Sudoku grid Validator project for clash of coders 3.0 
Author : CHINTAN LABANA
date  : 11-11-2025
project : sudoku grid validator in c language
This is my C language project for Clash of Coders 3 event 
The project checks whether a given 9x9 Sudoku grid follows Sudoku rules or not.

The program validates:
Every row must have numbers 1 to 9 without any repetition.  
 Every column must have numbers 1 to 9 without any repetition.  
 Every 3*3 grid must also contain numbers 1 to 9 without repetition.  

If all conditions are true program prints "VALID SOLUTION "  
otherwise prints "INVALID SOLUTION"

# CONCEPTS USED
C Programming Concepts
 2D Array (`int grid[9][9]`)
 Nested `for` loops
 User-defined functions (`check_rows()`, `check_columns()`, `check_subgrids()`)
 Function calling and return values
 Conditional statements (`if`, `else`)
 Passing arrays to functions using pointers
 Input/Output (`scanf`, `printf`)

 LOGICAL & MATHEMATICAL :
Matrix traversal  
Duplicate checking using small frequency array `used[10]`  
Sudoku rule validation logic  

#HOW IT WORKS :
1. The program reads 81 integers (9 rows × 9 columns) from the user.  
   (You can also redirect input from a text file.)  
2. It calls three checking functions:
   check_rows(grid)
   check_columns(grid)
   check_subgrids(grid)
3. Each function returns 1 if that part of Sudoku is valid, otherwise 0.  
4. The main function combines all results and prints the final output.

# HOW TO COMPILE
Use the following GCC command in your terminal or VS Code
gcc sudkougridvalid.c
# How to run 
use ./a

