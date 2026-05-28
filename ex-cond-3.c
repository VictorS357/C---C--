#include<stdio.h>

int main() {
    int nota1, nota2, nota3, nota4, res;
    printf("Informe sua primeira nota: ");
    scanf("%i", &nota1);

    printf("Informe sua segunda nota: ");
    scanf("%i", &nota2);

    printf("Informe sua terceira nota: ");
    scanf("%i", &nota3);

    printf("Informe sua quarta nota: ");
    scanf("%i", &nota4);

    res = (nota1 + nota2 + nota3 + nota4) / 4;

    if (res >= 6) {
        printf("Aprovado");
    } else {
        printf("Reprovado");
    }
}