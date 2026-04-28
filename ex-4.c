#include<stdio.h>

int main() {
    int nota1, nota2, media;
    printf("Informe a primeira nota: ");
    scanf("%i", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%i", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 0 && media < 3) {
        printf("Reprovado");
    } else if (media >= 3 && media < 7) {
        printf("Exame");
    } else if (media >= 7 && media <= 10) {
        printf("Aprovado");
    }
}