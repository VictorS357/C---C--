#include<stdio.h>
#include<math.h>

int main() {
    float peso, altura, resultado;

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    resultado = peso / pow(altura, 2);

    if (resultado <= 20) {
        printf("Abaixo do peso");
    } else if (resultado > 20 && resultado <= 25) {
        printf("Normal");
    } else if (resultado > 25 && resultado <= 30) {
        printf("Excesso de peso");
    } else if (resultado > 30 && resultado <= 35) {
        printf("Obesidade");
    } else {
        printf("Obesidade morbida");
    }
    return 0;
}