#include<stdio.h>

int main() {
    int num1, num2, num3;

    printf("Informe o primeiro numero");
    scanf("%i", &num1);

    printf("Informe o segundo numero");
    scanf("%i", &num2);

    printf("Informe o terceiro numero");
    scanf("%i", &num3);

    if (num1 < num2 && num1 < num3) {
        printf("o numero %i e o menor", num1);
    } else if (num2 < num1 && num2 < num3) {
        printf("o numero %i e o menor", num2);
    } else if (num3 < num2 && num3 < num1) {
        printf("o numero %i e o menor", num3);
    }
}