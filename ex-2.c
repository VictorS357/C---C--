#include<stdio.h>

int main() {
    int num1, num2, res;
    printf("Informe um numero: ");
    scanf("%i", &num1);
    printf("Informe outro numero: ");
    scanf("%i", &num2);
    res = num1 + num2;
    if (res > 10) {
        printf("%i", res);
    } else {
        printf("O resultado nao foi suficiente");
    }
}