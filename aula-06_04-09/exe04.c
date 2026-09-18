#include <stdio.h>

void imprimir_asteriscos(int quantidade){
    for (int i = 0; i < quantidade; i++)
        printf("* ");
    printf("\n");
}

int main(){
    int quantidade;

    printf("Digite a quantidade de asteriscos: ");
    scanf("%d", &quantidade);

    printf("\n");
    imprimir_asteriscos(quantidade);

    return 0;
}