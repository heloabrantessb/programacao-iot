#include <stdio.h>

void imprimir_caracter(int quantidade, char c){
    for (int i = 0; i < quantidade; i++)
        printf("%c ", c);
    printf("\n");
}

int main(){
    char c;
    int quantidade;

    printf("Digite o caracter a ser impresso: ");
    scanf(" %c", &c);

    printf("\nDigite a quantidade de caracteres: ");
    scanf("%d", &quantidade);

    printf("\n");
    imprimir_caracter(quantidade, c);

    return 0;
}