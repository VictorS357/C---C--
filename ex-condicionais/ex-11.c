#include <stdio.h>

int main () {
    float salario, aumento, novo;
    printf("Informe seu salário: ");
    scanf("%f", &salario);
    if (salario <= 1500) {
        aumento = salario * 0.35;
    } else { 
        aumento = salario * 0.15;
    }
    novo = salario + aumento;
    printf("seu novo salario e de: %f", novo);
}

