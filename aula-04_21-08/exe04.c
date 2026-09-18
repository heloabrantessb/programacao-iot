#include <stdio.h>
#include <string.h>

int main(){
    char frase[200], dica[50];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    int tam = strlen(frase);
    if (tam > 0 && frase[tam - 1] == '\n'){
        frase[tam - 1] = '\0';
        tam--;
    }

    printf("Digite a dica de senha: ");
    fgets(dica, sizeof(dica), stdin);

    int tamDica = strlen(dica);
    if (tamDica > 0 && dica[tamDica - 1] == '\n'){
        dica[tamDica - 1] = '\0';
        tamDica--;
    }

    int posicao = -1;

    for (int i = 0; i <= tam - tamDica; i++){
        int igual = 1;
        for (int j = 0; j < tamDica; j++){
            if (frase[i + j] != dica[j]){
                igual = 0;
                break;
            }
        }
        if (igual){
            posicao = i;
            break;
        }
    }

    if (posicao != -1)
        printf("\nA palavra foi encontrada iniciando na posicao: %d\n", posicao);
    else
        printf("\nA palavra nao foi encontrada.\n");

    return 0;
}