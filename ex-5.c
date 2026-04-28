#include<stdio.h>

int main() {
    int num1, num2;

    printf("Informe um numero: ");
    scanf("%i", &num1);

    printf("Informe outro numero: ");
    scanf("%i", &num2);

    if (num1 > num2) {
        printf("%i", num1);
    } else if (num2 > num1) {
        printf("%i", num2);
    }
}