#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int matriz[5][5];

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            matriz[i][j] = 10 + rand() % 41; 

    printf("Matriz gerada:\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++)
            printf("%3d ", matriz[i][j]);
        printf("\n");
    }

    int soma = 0;
    for (int i = 0; i < 5; i++)
        soma += matriz[i][i];

    int maior = matriz[0][0], linhaMaior = 0, colunaMaior = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    int menorAcima = -1;
    for (int i = 0; i < 5; i++){
        for (int j = i + 1; j < 5; j++){
            if (menorAcima == -1 || matriz[i][j] < menorAcima)
                menorAcima = matriz[i][j];
        }
    }

    printf("\nSomatorio da diagonal principal: %d\n", soma);
    printf("Maior valor e posicao: %d (linha: %d / coluna: %d)\n", maior, linhaMaior, colunaMaior);
    printf("Menor valor acima da diagonal principal: %d\n", menorAcima);

    return 0;
}