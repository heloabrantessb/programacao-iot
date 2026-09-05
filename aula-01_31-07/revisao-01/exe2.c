#include <stdio.h>

int main(){
    int valor1; int valor2;

    printf("Digite 2 valores: ");
    scanf("%d %d", &valor1, &valor2);

    int resultado = valor1/valor2;
    printf("\nO valor %d dividido pelo valor %d é: %d", valor1, valor2, resultado);

    return 0;
}