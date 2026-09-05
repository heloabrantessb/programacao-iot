#include <stdio.h>
#include <math.h>

int main(){
    float km;
    int km_por_litro = 16;

    printf("Quantos km deseja percorrer?");
    scanf("%f", &km);

    float resultado = km / km_por_litro;
    printf("A quantidade de litros de combustível necessária é: %.1f", resultado);
    return 0;
}