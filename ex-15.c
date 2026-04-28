#include<stdio.h>

int main() {
    float preco_prod, novo_prod, aumento;

    printf("Informe o preco do produto: ");
    scanf("%f", &preco_prod);

    if (preco_prod <= 50) {
        aumento = preco_prod * 0.05;
        novo_prod = aumento + preco_prod;
    } else if (preco_prod <= 100) {
        aumento = preco_prod * 0.1;
        novo_prod = aumento + preco_prod;
    } else if (preco_prod > 100) {
        aumento = preco_prod * 0.15;
        novo_prod = aumento + preco_prod;
    }

    printf("O novo preco do produto e: R$ %.2f\n", novo_prod);

    if (novo_prod <= 80) {
        printf("O produto é barato");
    } else if (novo_prod <= 120) {
        printf("O produto é normal");
    } else if (novo_prod <= 200) {
        printf("O produto é caro");
    } else if (novo_prod > 200) {
        printf("O produto é muito caro");
    }
}