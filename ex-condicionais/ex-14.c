#include<stdio.h>

int main() {
    int salario, novo_sal, aumento;

    printf("Informe seu salario: ");
    scanf("%i", &salario);

    if (salario < 3000) {
        aumento = salario * 0.15;
        novo_sal = salario + aumento;
        printf("O valor do aumento e de: %i\n", aumento);
        printf("Seu novo salario e: %i",  novo_sal);
    } else if (salario >= 3000 && salario < 6000) {
        aumento = salario * 0.1;
        novo_sal = salario + aumento;
        printf("O valor do aumento e de: %i\n", aumento);
        printf("Seu novo salario e: %i",  novo_sal);
    } else if (salario >= 6000 && salario <= 9000) {
        aumento = salario * 0.05;
        novo_sal = salario + aumento;
        printf("O valor do aumento e de: %i\n", aumento);
        printf("Seu novo salario e: %i",  novo_sal);
    } else {
        printf("Seu salario nao esta disponivel para aumento\n");
        printf("Seu salario e: %i", salario);  
    }
}