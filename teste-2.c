#include<math.h>
#include<stdio.h>

int main () {
    float num1, num2 , res;
    int alt;
    printf("Escolha uma alternativa (1 ou 2): ");
    scanf("%i",&alt);
    if (alt == 1) {
        printf("Informe um numero: ");
        scanf("%f", &num1);
        printf("Informe oto numero: ");
        scanf("%f", &num2);
        res = pow(num1, num2);
        printf("O resultado e: %f", res);
    } 
    else {
        printf("Informe um numero para raiz: ");
        scanf("%f", &num1);
        res = sqrt(num1);
        printf("O resultado e: %f", res);
    }
    return 1;
}