#include <stdio.h>

int main(){
    float celsius;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = (9 * celsius + 160) / 5;

    printf("Temperatura em graus Fahrenheit: %.1f", fahrenheit);
    return 0;
}