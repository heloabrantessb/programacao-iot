#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verifica_soma(int a, int b, int resposta){
    if (a + b == resposta)
        return 1 + rand() % 4;   /* 1 a 4: acerto */
    return 5 + rand() % 4;       /* 5 a 8: erro */
}

int imprime_mensagem(int codigo){
    switch (codigo){
        case 1: 
            printf("\nMuito Bem! Continue assim.\n"); 
            break;
        case 2: 
            printf("\nOtimo trabalho!\n"); 
            break;
        case 3: 
            printf("\nParabens! Voce eh otimo!\n"); 
            break;
        case 4: 
            printf("\nTa de brincadeira? Nao erra nenhuma! =D\n"); 
            break;
        case 5: 
            printf("\nPuxa, nao foi desta vez.\n"); 
            break;
        case 6: 
            printf("\nContinue tentando!\n");  
            break;
        case 7: 
            printf("\nFaltou pouquinho, vamos la!\n"); 
            break;
        case 8: 
            printf("\nCoragem! Nao desista!\n"); 
            break;
    }
    return 0;
}

int main(){
    int a, b, resposta, codigo;

    srand(time(NULL));

    while (1){
        a = rand() % 10;
        b = rand() % 10;

        printf("Quanto eh %d + %d (0 para sair): ", a, b);
        scanf("%d", &resposta);

        if (resposta == 0 && a != 0 && b != 0)
            break;

        codigo = verifica_soma(a, b, resposta);
        imprime_mensagem(codigo);
    }

    return 0;
}