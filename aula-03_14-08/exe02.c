#include <stdio.h>

int main(){
    int v1, v2, v3, aux;
    printf("Digite 3 valores: ");
    scanf("%d %d %d", &v1, &v2, &v3);

    if (v1 > v2){ aux = v1; v1 = v2; v2 = aux; }
    if (v2 > v3){ aux = v2; v2 = v3; v3 = aux; }
    if (v1 > v2){ aux = v1; v1 = v2; v2 = aux; }

    printf("Ordem crescente: %d, %d, %d\n", v1, v2, v3);
    return 0;
}