#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i;
    int num2[40];

    srand(time(NULL));

    for(i = 0;i<40;i++)
        num2[i] = 1 + rand() % 99;

    printf("\n\n");
    for(i = 0;i<40;i++)
        printf("%d ", num2[i]);
    printf("\n\n");

    return 0;
}