#include <stdio.h>
#include <string.h>

int main(){
    char nome[100];

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    int tam = strlen(nome);

    if (tam > 0 && nome[tam - 1] == '\n'){
        nome[tam - 1] = '\0';
        tam--;
    }

    printf("Nome invertido: ");
    for (int i = tam - 1; i >= 0; i--)
        printf("%c", nome[i]);
    printf("\n");

    return 0;
}