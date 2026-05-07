#include<stdio.h>

int main() {
    float salario, res, aumento;

    printf("Informe seu salario: ");
    scanf("%f", &salario);

    if (salario < 1500) {
        aumento = salario * 0.3;
        res = aumento + salario;
        printf("Seu novo salario e de: %f", res);
    } else {
        printf("Seu salario nao e elegivel para aumento.");
    }
}