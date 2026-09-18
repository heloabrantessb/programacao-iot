#include <stdio.h>

int main(){
    int n, atual, anterior, proximo;

    printf("Forneca um valor: ");
    scanf("%d", &n);

    printf("\nA sequencia de Fibonacci do valor eh: ");

    if (n >= 1) printf("1");
    if (n >= 2) printf(", 1");

    anterior = 1;
    atual = 1;
    while (atual + anterior <= n){
        proximo = atual + anterior;
        printf(", %d", proximo);
        anterior = atual;
        atual = proximo;
    }
    printf(".\n");

    return 0;
}