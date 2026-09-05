#include <stdio.h>

void menu(){
    printf("\n=================OPERAÇÕES====================");
    printf("\n1 - Adição");
    printf("\n2 - Subtração");
    printf("\n3 - Multiplicação");
    printf("\n4 - Divisão");
    printf("\nDigite o número do menu equivalente a operação \nque deseja realizar:");
}

int main(){
    int valor_um; int valor_dois;
    printf("Digite o primero valor: ");
    scanf("%d", &valor_um);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor_dois);

    menu();
    int opcao;

    scanf("%d", &opcao);
    
    switch(opcao){
        case 1:
            printf("O resultado da soma é: %d", valor_um + valor_dois);
            break;
        case 2:
            printf("O resultado da subtração é: %d", valor_um - valor_dois);
            break;
        case 3:
            printf("O resultado da multiplicação é: %d", valor_um * valor_dois);
            break;
        case 4:
            printf("O resultado da divisão é: %d", valor_um / valor_dois);
            break;
        default:
            printf("Favor escolher uma opção válida!!");
            break;
    }

    return 0;
}