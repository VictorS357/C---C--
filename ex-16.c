#include<stdio.h>

int main() {
    int precoProd, codOrigem;
    printf("Informe o preço do produto: ");
    scanf("%i", &precoProd);

    printf("Informe o codigo de origem do produto: ");
    scanf("%i", &codOrigem);

    if (codOrigem == 1) {
        printf("O produto veio do sul");
    } else if (codOrigem == 2) {
        printf("O produto veio do norte");
    } else if (codOrigem == 3) {
        printf("O produto veio do leste");
    } else if (codOrigem == 4) {
        printf("O produto veio do oeste");
    } else if (codOrigem == 5 || codOrigem == 6) {
        printf("O produto veio do noroeste");
    } else if (codOrigem >= 7 && codOrigem <= 9) {
        printf("O produto veio do sudeste");
    } else if (codOrigem >= 10 && codOrigem <= 20) {
        printf("O produto veio do centro-oeste");
    } else if (codOrigem >= 21 && codOrigem <= 30) {
        printf("O produto veio do nordeste");
    }
}