#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verifica_soma(int a, int b, int resposta){
    if (a + b == resposta)
        return 1;
    return 0;
}

int main(){
    int a, b, resposta;

    srand(time(NULL));

    while (1){
        a = rand() % 10;
        b = rand() % 10;

        printf("Quanto eh %d + %d (0 para sair): ", a, b);
        scanf("%d", &resposta);

        if (resposta == 0 && a != 0 && b != 0)
            break;

        if (verifica_soma(a, b, resposta))
            printf("\nMuito Bem!\n");
        else
            printf("\nContinue tentando.\n");
    }

    return 0;
}