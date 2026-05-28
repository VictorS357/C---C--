#include<stdio.h>

int main() {
    int num1, res;
    printf("Informe um numero: ");
    scanf("%i", &num1);
    if (num1 > 20) {
        res = num1 / 2;
    } else {
        res = num1;
    }
    printf("O resultado é: %i", res);
}