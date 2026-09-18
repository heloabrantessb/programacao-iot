#include <stdio.h>
#include <math.h>

// prototipos das funcoes
double calcula_raiz(double valor);
double calcula_quadrado(double valor);
double calcula_cubo(double valor);
double arredonda_cima(double valor);
double arredonda_baixo(double valor);

int main(){
    double numero;

    printf("Digite um numero fracionado: ");
    scanf("%lf", &numero);

    printf("\nRaiz de %.2f: %.4f\n", numero, calcula_raiz(numero));
    printf("Quadrado de %.2f: %.4f\n", numero, calcula_quadrado(numero));
    printf("Cubo de %.2f: %.4f\n", numero, calcula_cubo(numero));
    printf("Arredondado para cima: %.2f\n", arredonda_cima(numero));
    printf("Arredondado para baixo: %.2f\n", arredonda_baixo(numero));

    return 0;
}

double calcula_raiz(double valor){
    return sqrt(valor);
}

double calcula_quadrado(double valor){
    return pow(valor, 2);
}

double calcula_cubo(double valor){
    return pow(valor, 3);
}

double arredonda_cima(double valor){
    return ceil(valor);
}

double arredonda_baixo(double valor){
    return floor(valor);
}