#include <stdio.h>

int main () {
    float saldo, credito;
    printf("informe seu saldo: ");
    scanf("%f", &saldo);
    if (saldo <= 2000) {
        credito = saldo * 0.1;
    } else if (saldo <= 3000 && saldo > 2000) {
        credito = saldo * 0.2;
    } else if (saldo <= 4000 && saldo > 3000) {
        credito = saldo * 0.25;
    } else if (saldo > 4000) {
        credito = saldo * 0.3;
    }
    printf("Seu saldo medio e: %f\n", saldo);
    printf("Seu credito e: %f", credito);
}