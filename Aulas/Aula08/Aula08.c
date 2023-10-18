#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Pecorrendo matriz dinâmica com ponteiro

int main()
{

    int **mat, i, j;

    mat = malloc(5 * sizeof(int *));

    for (i = 0; i < 5; i++)
        mat[i] = malloc(3 * sizeof(int));

    srand(time(NULL));

    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; i++)
            *(*(mat + i) + j) = rand() % 100;

    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; i++)
            printf("%d ", *(*(mat + i) + j));
    prinf("\n");

    return 0;
}