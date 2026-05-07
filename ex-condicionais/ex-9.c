#include<stdio.h>
#include<math.h>

int main() {
    int op;
    float num1, num2, res;

    printf("Escolha um numero: ");
    scanf("%f", &num1);

    printf("Escolha outro numero: ");
    scanf("%f", &num2);

    printf("Escolha um numero entre 1 a 3: ");
    scanf("%i", &op);

    switch(op) {
        case 1:
            res = pow(num1, num2);
            printf("Resultado potencia: %f", res);
            break;

        case 2:
            res = sqrt(num1);
            printf("Resultado raiz quadrada numero 1: %f", res);
            break;

        case 3:
            res = cbrt(num2);
            printf("Resultado raiz cubica numero 2: %f", res);
            break;
    }
}