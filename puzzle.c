#include "sudoku.h"


Square *** setUpPuzzle(int ** puzzle)
{
    Square *** sudoku;

    sudoku = (Square***)malloc(sizeof(Square**)*9);

    /* loop through rows */
    for(int i = 0; i < 9; i++)
    {
        sudoku[i] = (Square**)malloc(sizeof(Square*)*9);
        
        /* loop through columns */
        for(int j = 0; j  < 9; j++)
        {
            sudoku[i][j] = (Square*)malloc(sizeof(Square)*9);

            sudoku[i][j]->number = puzzle[i][j];

            sudoku[i][j]->row = i;
            sudoku[i][j]->column = j;

            if(sudoku[i][j]->number != 0)
                sudoku[i][j]->code = POSSIBLE;
            else
                sudoku[i][j]->code = (char)0x0;
        }
    }

    return sudoku;
}



int ** createPuzzle()
{
    int ** puzzle;
    int array[9][9] = {0, 1, 9,     0, 0, 2,    0, 0, 0,
                       4, 7, 0,     6, 9, 0,    0, 0, 1,
                       0, 0, 0,     4, 0, 0,    0, 9, 0,

                       8, 9, 4,     5, 0, 7,    0, 0, 0,
                       0, 0, 0,     0, 0, 0,    0, 0, 0,
                       0, 0, 0,     2, 0, 1,    9, 5, 8,

                       0, 5, 0,     0, 0, 6,    0, 0, 0,
                       6, 0, 0,     0, 2, 8,    0, 7, 9,
                       0, 0, 0,     1, 0, 0,    8, 6, 0,};
    
    puzzle = (int**)malloc(sizeof(int*)*9);
    
    for(int i = 0; i < 9; i++)
    {
        puzzle[i] = (int*)malloc(sizeof(int)*9);

        for(int j = 0; j  < 9; j++)
        {
            puzzle[i][j] = array[i][j];
        }
    }

    return puzzle;
    
}
void printPuzzle(int ** puzzle)
{
    printf("------------------------------\n");
    for(int i = 0; i < 9; i++)
    {
        /* print each row */
        printf("|"); 
        for(int j = 0; j < 9; j++)
        {
            printf(" %d ", puzzle[i][j]);

            if(((j + 1) % 3) == 0)
            {
                printf("|"); 
            }
        }
        printf("\n");
        if(((i + 1) % 3) == 0)
        {
            printf("------------------------------\n"); 
        }
    }
}