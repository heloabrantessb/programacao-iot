#include <stdio.h>

int main(){
    int vetor[5];
    int pesquisado, encontrado = 0, posicao = -1;

    printf("Digite 5 valores: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &vetor[i]);

    printf("\nValor a ser pesquisado: ");
    scanf("%d", &pesquisado);

    for (int i = 0; i < 5; i++){
        if (vetor[i] == pesquisado){
            encontrado = 1;
            posicao = i;
            break;
        }
    }

    if (encontrado)
        printf("Valor %d encontrado na posicao: %d\n", pesquisado, posicao);
    else
        printf("Valor %d nao encontrado\n", pesquisado);

    return 0;
}