#include <stdio.h>
#include <math.h>

int main(){
    int diames[4] = {10, 15, 20, 25};
    int qtd_esferas[4] = {0};
    int caixas_diagonal_maior = 0;
    float A, B, C, D2, D;

    printf("Digite as dimensoes da caixa (A B C). Valor negativo ou zero para A encerra:\n");
    while (1){
        scanf("%f %f %f", &A, &B, &C);
        if (A <= 0) break;

        D2 = A*A + B*B + C*C;
        D = sqrt(D2);

        int coube = 0;
        for (int i = 0; i < 4; i++){
            if (D <= diames[i]){
                qtd_esferas[i]++;
                coube = 1;
                break;     
            }
        }
        if (!coube)
            caixas_diagonal_maior++;
    }

    printf("\nResultado:\n");
    int total = 0;
    for (int i = 0; i < 4; i++){
        printf("Esferas diametro %d cm: %d\n", diames[i], qtd_esferas[i]);
        total += qtd_esferas[i];
    }
    printf("Total de esferas: %d\n", total);
    printf("Caixas com diagonal > maior esfera (25 cm): %d\n", caixas_diagonal_maior);

    return 0;
}