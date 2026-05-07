#include<stdio.h>

int main() {
    float num1, num2, res;
    int opcao;

    printf("Informe um numero: ");
    scanf("%f", &num1);

    printf("Informe outro numero: ");
    scanf("%f", &num2);

    printf("Escolha uma opcao de 1 a 4: ");
    scanf("%i", &opcao);

    switch(opcao) {
        case 1:
            res = (num1 + num2) / 2;
            printf("A media e: %f", res);
            break;

        case 2:
            if (num1 > num2) {
                res = num1 - num2;
                printf("O resultado da diferenca e: %f", res);
            } else {
                res = num2 - num1;
                printf("O resultado da diferenca e: %f", res);
            }
            break;
        
        case 3:
            res = num1 * num2;
            printf("O produto e: %f", res);
            break;
        
        case 4:
            res = num1 / num2;
            printf("O resultado da divisao e: %f", res);
            break;
    }
}