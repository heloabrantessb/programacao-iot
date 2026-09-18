#include <stdio.h>

int main(){
    int v1, v2, menor, maior, soma = 0, primeiro = 1;

    printf("Digite o primeiro valor: ");
    scanf("%d", &v1);
    printf("Digite o segundo valor: ");
    scanf("%d", &v2);

    menor = (v1 < v2) ? v1 : v2;
    maior = (v1 > v2) ? v1 : v2;

    printf("\nA soma dos valores pares entre %d e %d: ", v1, v2);

    for (int i = menor + 1; i < maior; i++){
        if (i % 2 == 0){
            if (!primeiro) printf(" + ");
            printf("%d", i);
            soma += i;
            primeiro = 0;
        }
    }
    printf(" = %d\n", soma);

    return 0;
}