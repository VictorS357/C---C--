#include<stdio.h>

int main() {
    int lado1, lado2, lado3;

    printf("Informe o primeiro lado do triângulo: ");
    scanf("%d", &lado1);

    printf("Informe o segundo lado do triângulo: ");
    scanf("%d", &lado2);

    printf("Informe o terceiro lado do triângulo: ");
    scanf("%d", &lado3);

    if (lado1 == lado2 && lado1 == lado3 && lado2 == lado3) {
        printf("Equilatero");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("Isoceles");
    } else {
        printf("Escaleno");
    }

    return 0;
}