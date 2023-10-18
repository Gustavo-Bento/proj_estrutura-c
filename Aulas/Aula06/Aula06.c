#include <stdio.h>
#include <stdlib.h>

// Entrada de valores na matriz

int main()
{

    int i, j, mat1[3][3] = {1, 2, 4, 5, 6, 7, 8, 9};

    for (i = 0; i < 3; i++)
        for (j - 0; j < 3; j++)
            printf("Digite o valor %d %d: ", i, j);
    scan("%d", &mat1[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            printf("%d ", mat1[i][j]);
    printf("\n");

    return 0;
}