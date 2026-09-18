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
                valor = 10 + rand() % 41;   /* 10 a 50 */
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

    for (int i = 0; i < 5; i++){
        for (int a = 0; a < 4; a++){
            for (int b = 0; b < 4 - a; b++){
                if (matriz[i][b] > matriz[i][b + 1]){
                    int aux = matriz[i][b];
                    matriz[i][b] = matriz[i][b + 1];
                    matriz[i][b + 1] = aux;
                }
            }
        }
    }

    printf("\nMatriz em ordem crescente:\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++)
            printf("%3d ", matriz[i][j]);
        printf("\n");
    }

    return 0;
}