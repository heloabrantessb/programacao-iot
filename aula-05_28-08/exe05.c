#include <stdio.h>
#include <string.h>

int main(){
    char nomes[5][50];

    for (int i = 0; i < 5; i++){
        printf("Nome %02d: ", i + 1);
        fgets(nomes[i], 50, stdin);

        int tam = strlen(nomes[i]);
        if (tam > 0 && nomes[i][tam - 1] == '\n')
            nomes[i][tam - 1] = '\0';
    }

    for (int a = 0; a < 4; a++){
        for (int b = 0; b < 4 - a; b++){
            if (strcmp(nomes[b], nomes[b + 1]) > 0){
                char aux[50];
                strcpy(aux, nomes[b]);
                strcpy(nomes[b], nomes[b + 1]);
                strcpy(nomes[b + 1], aux);
            }
        }
    }

    printf("\nNomes em Ordem Alfabetica\n");
    printf("----------------------------------------\n");
    for (int i = 0; i < 5; i++)
        printf("%s\n", nomes[i]);

    return 0;
}