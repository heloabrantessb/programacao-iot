#include <stdio.h>

int main(){
    int v1, v2, v3, v4;
    printf("Digite 4 valores inteiros: ");
    scanf("%d %d %d %d", &v1, &v2, &v3, &v4);

    int all_even = (v1 % 2 == 0) && (v2 % 2 == 0) && (v3 % 2 == 0) && (v4 % 2 == 0);

    if (all_even){
        printf("Todos os valores sao pares!\n");
    } else {
        printf("Nem todos os valores sao pares.\n");
    }
    return 0;
}