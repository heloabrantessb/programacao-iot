#include <stdio.h>

int main(){
    int vetor[10];

    printf("Digite 10 valores inteiros: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &vetor[i]);

    printf("\nPosicao\tValor\tHistograma\n");
    for (int i = 0; i < 10; i++){
        printf("%d\t%d\t", i, vetor[i]);
        for (int j = 0; j < vetor[i]; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}