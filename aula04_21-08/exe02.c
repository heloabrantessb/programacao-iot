#include <stdio.h>

int main(){
    int vetor[5];
    int pesquisado, encontrado = 0, posicao = -1;

    printf("Digite 5 valores:\n");
    for (int i = 0; i < 5; i++){
        int valor, repetido;
        do {
            repetido = 0;
            printf("Valor %d: ", i + 1);
            scanf("%d", &valor);

            for (int j = 0; j < i; j++){
                if (vetor[j] == valor){
                    repetido = 1;
                    printf("Valor ja existe no vetor! Digite outro.\n");
                    break;
                }
            }
        } while (repetido);

        vetor[i] = valor;
    }

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