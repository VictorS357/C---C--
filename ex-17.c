#include<stdio.h>

int main() {
    int peso, idade;

    printf("Informe seu peso: ");
    scanf("%i", &peso);

    printf("Informe sua idade: ");
    scanf("%i", &idade);

    if (idade < 20) {
        if (peso <= 60) {
            printf("Seu grupo de risco e 9");
        } else if (peso <= 90) {
            printf("Seu grupo de risco e 8");
        } else if (peso > 90) {
            printf("Seu grupo de risco e 7");
        }
    } else if (idade <= 50) {
        if (peso <= 60) {
            printf("Seu grupo de risco e 6");
        } else if (peso <= 90) {
            printf("Seu grupo de risco e 5");
        } else if (peso > 90) {
            printf("Seu grupo de risco e 4");
        }
    } else if (idade > 50) {
        if (peso <= 60) {
            printf("Seu grupo de risco e 3");
        } else if (peso <= 90) {
            printf("Seu grupo de risco e 2");
        } else if (peso > 90) {
            printf("Seu grupo de risco e 1");
        }
    }

}