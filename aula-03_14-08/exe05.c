#include <stdio.h>

int main(){
    int opcao;
    float celsius, fahrenheit, kelvin;

    do {
        printf("\nConversoes Online\n\n");
        printf("1. Celsius para Fahrenheit\n");
        printf("2. Fahrenheit para Celsius\n");
        printf("3. Celsius para Kelvin\n");
        printf("4. Kelvin para Celsius\n");
        printf("5. Encerrar programa\n\n");
        printf("Informe a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                printf("\nDigite a temperatura em Celsius: ");
                scanf("%f", &celsius);
                fahrenheit = celsius * 1.8 + 32;
                printf("Temperatura em Fahrenheit: %.1f\n", fahrenheit);
                break;
            case 2:
                printf("\nDigite a temperatura em Fahrenheit: ");
                scanf("%f", &fahrenheit);
                celsius = (fahrenheit - 32) / 1.8;
                printf("Temperatura em Celsius: %.1f\n", celsius);
                break;
            case 3:
                printf("\nDigite a temperatura em Celsius: ");
                scanf("%f", &celsius);
                kelvin = celsius + 273.15;
                printf("Temperatura em Kelvin: %.2f\n", kelvin);
                break;
            case 4:
                printf("\nDigite a temperatura em Kelvin: ");
                scanf("%f", &kelvin);
                celsius = kelvin - 273.15;
                printf("Temperatura em Celsius: %.2f\n", celsius);
                break;
            case 5:
                printf("\nPrograma encerrado.\n");
                break;
            default:
                printf("\nOpcao invalida!\n");
        }

    } while (opcao != 5);

    return 0;
}