#include "sudoku.h"


int main(void)
{
    int ** puzzle;
    puzzle =  createPuzzle();

    printPuzzle(puzzle);

    return 0;
}