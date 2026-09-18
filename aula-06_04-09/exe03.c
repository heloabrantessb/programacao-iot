#include <stdio.h>

int eh_letra(char c){
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    return 0;
}

int main(){
    char c;

    printf("Digite um caracter: ");
    scanf("%c", &c);

    if (eh_letra(c))
        printf("\nO caracter '%c' e letra.\n", c);
    else
        printf("\nO caracter '%c' nao e letra.\n", c);

    return 0;
}