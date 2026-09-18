#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jaExiste(int matriz[5][5], int linhaAtual, int colunaAtual, int valor){
    for (int i = 0; i <= linhaAtual; i++){
        int limite = (i == linhaAtual) ? colunaAtual : 5;
        for (int j = 0; j < limite; j++){
            if (matriz[i][j] == valor)
                return 1;
        }
    }
    return 0;
}

int main(){
    int matriz[5][5];

    srand(time(NULL));

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            int valor;
            do {
                valor = 10 + rand() % 31; 
            } while (jaExiste(matriz, i, j, valor));
            matriz[i][j] = valor;
        }
    }

    printf("Matriz gerada:\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++)
            printf("%3d ", matriz[i][j]);
        printf("\n");
    }

    int linha = rand() % 5;

    int maior = matriz[linha][0];
    for (int j = 1; j < 5; j++){
        if (matriz[linha][j] > maior)
            maior = matriz[linha][j];
    }

    printf("\nLinha aleatoria selecionada: %d\n", linha);
    printf("Maior elemento da linha %d: %d\n", linha, maior);

    return 0;
}