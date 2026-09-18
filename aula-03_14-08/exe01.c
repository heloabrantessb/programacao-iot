#include <stdio.h>

int main(){
    int valor, maior, menor;
    int aux = 0;

    while (1){
        printf("Digite um valor: ");
        scanf("%d", &valor);
        if (valor < 0) break;

        if (aux == 0){
            maior = valor;
            menor = valor;
        } else {
            if (valor > maior) maior = valor;
            if (valor < menor) menor = valor;
        }
        aux++;
    }

    if (aux == 0)
        printf("\nNenhum valor informado.\n");
    else {
        printf("\nMaior valor: %d\n", maior);
        printf("Menor valor: %d\n", menor);
    }

    return 0;
}