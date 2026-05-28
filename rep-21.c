#include <stdio.h>

int main() {
    int idade, i, qtd1, qtd2;
    float peso, somaPeso1, somaPeso2;

    for(i = 1; i <= 12; i++) {

        printf("Pessoa %d\n", i);

        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite o peso: ");
        scanf("%f", &peso);

        if(idade >= 0 && idade <= 18) {
            somaPeso1 += peso;
            qtd1++;
        }

        else if(idade > 28) {
            somaPeso2 += peso;
            qtd2++;
        }

        printf("\n");
    }

    if(qtd1 > 0) {
        printf("Media dos pesos (0 a 18 anos): %.2f\n", somaPeso1 / qtd1);
    } else {
        printf("Nao ha pessoas entre 0 e 18 anos.\n");
    }

    if(qtd2 > 0) {
        printf("Media dos pesos (maiores de 28 anos): %.2f\n", somaPeso2 / qtd2);
    } else {
        printf("Nao ha pessoas maiores de 28 anos.\n");
    }
}