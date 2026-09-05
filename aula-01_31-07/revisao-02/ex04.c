#include <stdio.h>

int main(){
    float nota; int frequencia;
    printf("Indique qual foi sua nota na disciplina: ");
    scanf("%f", &nota);
    printf("Indique qual foi a porcentagem de frequência na disciplina: ");
    scanf("%d", &frequencia);

    if(nota < 7 || frequencia < 75){
        printf("Você está reprovado(a)!\n");
        return 0;
    }

    printf("Você está aprovado!");
    return 0;
}
