#include <stdio.h>
#include <math.h>

int main(){
    int valor;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    int valor_ao_quadrado = pow(valor, 2);
    int valor_ao_cubo = pow(valor, 3);

    printf("\nO quadrado deste valor é: %d\n", valor_ao_quadrado);
    printf("O cubo deste valor é: %d", valor_ao_cubo);

    return 0;
}
