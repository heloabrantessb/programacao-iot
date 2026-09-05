#include <stdio.h>

int main(){
    int valor_um; int valor_dois; int valor_tres;
    printf("Indique 3 valores: ");
    scanf("%d %d %d", &valor_um, &valor_dois, &valor_tres);

    if(valor_um > valor_dois){
        int aux = valor_um;
        valor_um = valor_dois;
        valor_tres = aux;
    }

    if(valor_um > valor_tres){
        int aux = valor_um;
        valor_um = valor_tres;
        valor_tres = aux;
    }

    if(valor_dois > valor_tres){
        int aux = valor_dois;
        valor_dois = valor_tres;
        valor_tres = aux;
    }

    printf("A ordem crescente dos valores é: %d, %d, %d", valor_um, valor_dois, valor_tres);

    return 0;
}
