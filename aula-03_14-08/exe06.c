#include <stdio.h>

int main(){
    int v1, v2, menor, maior, primeiro = 1;

    printf("Digite 2 valores: ");
    scanf("%d %d", &v1, &v2);

    menor = (v1 < v2) ? v1 : v2;
    maior = (v1 > v2) ? v1 : v2;

    printf("Numeros primos entre (%d) e (%d): ", v1, v2);

    for (int n = menor; n <= maior; n++){
        if (n < 2) continue;

        int primo = 1;
        for (int d = 2; d * d <= n; d++){
            if (n % d == 0){
                primo = 0;
                break;
            }
        }

        if (primo){
            if (!primeiro) printf(", ");
            printf("%d", n);
            primeiro = 0;
        }
    }
    printf("\n");

    return 0;
}