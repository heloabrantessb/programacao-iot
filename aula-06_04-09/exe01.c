#include <stdio.h>

int eleva_cubo(int numero){
    return numero * numero * numero;
}

int main(){
    int valor;

    printf("Digite um valor para eleva-lo ao cubo: ");
    scanf("%d", &valor);

    printf("\nO Cubo de %d eh: %d\n", valor, eleva_cubo(valor));

    return 0;
}