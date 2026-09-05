#include <stdio.h>

int main(){
    int a; int b; int c;
    printf("Digite os valores de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    float media_harmonica = 3 / (1/a + 1/b + 1/c);
    return 0;
}