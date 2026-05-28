#include<stdio.h>

int main() {
    int num, i;
    float soma=0, res;
    for(i = 1; i <= 4; i++) {
        printf("Informe um numero: ");
        scanf("%i", &num);
        soma = soma + num;
    }

    res = soma / 4.0;
    printf("O resultado e: %f", res);
}