#include <stdio.h>

int potencia(int base, int exp){
    int resultado = 1;
    for (int i = 0; i < exp; i++)
        resultado *= base;
    return resultado;
}

int main(){
    int base, exp;

    printf("Digite um valor para a base e potencia: ");
    scanf("%d %d", &base, &exp);

    printf("\n%d elevado a %d eh: %d\n", base, exp, potencia(base, exp));

    return 0;
}