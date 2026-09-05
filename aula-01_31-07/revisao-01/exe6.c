#include <stdio.h>
#include <math.h>

int main(){
    int numero;
    printf("Digite um número inteiro de 3 dígitos: ");
    scanf("%d", &numero);
    float primeiro_digito = numero / 100;
    float segundo_digito = (numero % 100) /10;
    float terceiro_digito = numero % 10;

    int soma = primeiro_digito+segundo_digito+terceiro_digito;

    printf("Soma dos elementos: %0.f + %0.f + %0.f = %d", primeiro_digito, segundo_digito, terceiro_digito, soma);

    return 0;
}