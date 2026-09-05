#include <stdio.h>

int main(){
    int primeiro; int segundo; int terceiro; int quarto;
    printf("Digite o primeiro valor: ");
    scanf("%d", &primeiro);
    printf("Digite o segundo valor: ");
    scanf("%d", &segundo);
    printf("Digite o terceiro valor: ");
    scanf("%d", &terceiro);
    printf("Digite o quarto valor: ");
    scanf("%d", &quarto);

    int resto_um = primeiro % 2;
    int resto_dois = segundo % 2;
    int resto_tres = terceiro % 2;
    int resto_quatro = quarto % 2;

    printf("Número binário: %d%d%d%d\n", resto_um, resto_dois, resto_tres, resto_quatro);

    return 0;
}