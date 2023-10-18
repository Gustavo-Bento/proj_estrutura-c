#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Alocando matriz dinâmica

int main()
{

    int **mat, i, j;

    mat = malloc(4 * sizeof(int *));

    for (i = 0; i < 4; i++)
        mat[i] = malloc(3 * sizeof(int));

    srand(time(NULL));

    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; i++)
            mat[i][j] = rand() % 100;

    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; i++)
            printf("%d ", mat[i][j]);
    prinf("\n");

    return 0;
}