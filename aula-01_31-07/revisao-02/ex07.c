#include <stdio.h>

int main(){
    int valor;
    printf("Digite um valor para saber se é ímpar ou par: ");
    scanf("%d", &valor);

    if (valor % 2 != 0){
        printf("O valor indicado é ímpar");
        return 0;
    }

    printf("O valor indicado é par");
    return 0;
}
