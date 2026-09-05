#include <stdio.h>
#include <math.h>

int main(){
    int a; int b; int c;
    printf("Define os valores de A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);
    float delta = (b*b)-4*(a*c);

    if(delta == 0){        
        float unica_raiz = -b/2*a;  
        printf("A única raiz é: %f", unica_raiz); 
    }

    if(delta > 0){
        float primeira_raiz = (-b + sqrt(delta)) / 2*a; 
        float segunda_raiz = (-b - sqrt(delta)) / 2*a;
        
        printf("A primeira raiz (positiva) é: %f", primeira_raiz);
        printf("A segunda raiz (negativa) é: %f", segunda_raiz);
        return 0;
    }else{
        printf("\nA equação não possui raízes reais");
    }

    return 0;
}