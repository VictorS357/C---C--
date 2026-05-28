#include <stdio.h>

int main() {
    char nome[50];
    float salario, soma1Filho, soma2Filhos, media1Filho, media2Filhos;
    int filhos, i, qtd1Filho, qtd2Filhos;

    for(i = 1; i <= 100; i++) {

        printf("Pessoa %d\n", i);

        printf("Digite o nome: ");
        scanf("%s", nome);

        printf("Digite o salario: ");
        scanf("%f", &salario);

        printf("Digite o numero de filhos: ");
        scanf("%d", &filhos);

        if(filhos == 1) {
            soma1Filho += salario;
            qtd1Filho++;
        }

        else if(filhos == 2) {
            soma2Filhos += salario;
            qtd2Filhos++;
        }

        printf("\n");
    }

    if(qtd1Filho > 0) {
        media1Filho = soma1Filho / qtd1Filho;
        printf("Media salarial das pessoas com 1 filho: %.2f\n", media1Filho);
    } else {
        printf("Nao ha pessoas com 1 filho.\n");
        media1Filho = 0;
    }

    if(qtd2Filhos > 0) {
        media2Filhos = soma2Filhos / qtd2Filhos;
        printf("Media salarial das pessoas com 2 filhos: %.2f\n", media2Filhos);
    } else {
        printf("Nao ha pessoas com 2 filhos.\n");
        media2Filhos = 0;
    }

    if(media1Filho > media2Filhos) {
        printf("A maior media salarial e das pessoas com 1 filho.\n");
    }
    else if(media2Filhos > media1Filho) {
        printf("A maior media salarial e das pessoas com 2 filhos.\n");
    }
    else {
        printf("As medias salariais sao iguais.\n");
    }

    return 0;
}