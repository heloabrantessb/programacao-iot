#include <stdio.h>

int main(){
    int primeiro; int segundo; int terceiro; int ultimo;

    printf("Digite 4 valores inteiros: ");
    scanf("%d %d %d %d", &primeiro, &segundo, &terceiro, &ultimo);

    int soma_1_4 = primeiro + ultimo;
    int soma_2_3 = segundo + terceiro;
    int multiplicacao = soma_1_4 * soma_2_3;

    printf("\nA soma do primeiro com o último é: %d", soma_1_4);
    printf("\nA soma do segundo com o terceiro é: %d", soma_2_3);
    printf("\nO resultado final é: %d", multiplicacao);

    return 0;
}