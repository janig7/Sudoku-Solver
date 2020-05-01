#include "sudoku.h"


int main(void)
{
    int ** puzzle;
    Square *** sudoku;

    puzzle =  createPuzzle();

    printPuzzle(puzzle);

    sudoku = setUpPuzzle(puzzle);

    return 0;
}