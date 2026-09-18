#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int matriz[5][5], transposta[5][5];

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            matriz[i][j] = 10 + rand() % 51;   

    printf("Matriz gerada:\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++)
            printf("%3d ", matriz[i][j]);
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            transposta[j][i] = matriz[i][j];

    printf("\nMatriz Transposta:\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++)
            printf("%3d ", transposta[i][j]);
        printf("\n");
    }

    return 0;
}