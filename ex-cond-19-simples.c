#include <stdio.h>

int main() {
    float preco, aumento, imposto, novoPreco;
    int categoria;
    char situacao;

    printf("Informe o preco do produto: ");
    scanf("%f", &preco);

    printf("Informe a categoria (1, 2 ou 3): ");
    scanf("%d", &categoria);

    printf("Informe se o produto precisa de refrigeracao (N ou R): ");
    scanf(" %c", &situacao);

    // 1. LÓGICA DE CÁLCULO
    // Separamos o cálculo do aumento e imposto baseados no preço e categoria
    if (preco <= 25) {
        switch(categoria) {
            case 1: aumento = preco * 0.05; imposto = preco * 0.05; break;
            case 2: aumento = preco * 0.08; imposto = (situacao == 'R' || situacao == 'r') ? preco * 0.08 : preco * 0.05; break;
            case 3: aumento = preco * 0.10; imposto = preco * 0.05; break;
        }
    } else {
        switch(categoria) {
            case 1: aumento = preco * 0.12; imposto = preco * 0.05; break;
            case 2: aumento = preco * 0.15; imposto = (situacao == 'R' || situacao == 'r') ? preco * 0.08 : preco * 0.05; break;
            case 3: aumento = preco * 0.18; imposto = preco * 0.05; break;
        }
    }

    // Calculamos o preço final apenas uma vez
    novoPreco = preco + aumento - imposto;

    // 2. LÓGICA DE EXIBIÇÃO
    // Agora imprimimos os resultados uma única vez
    printf("\n--- Resultados ---\n");
    printf("O valor do aumento foi de: R$%.2f\n", aumento);
    printf("O valor do imposto foi de: R$%.2f\n", imposto);
    printf("O novo preco do produto e de: R$%.2f\n", novoPreco);

    if (novoPreco <= 50) {
        printf("A classificacao do produto e: Barato\n");
    } else if (novoPreco < 120) {
        printf("A classificacao do produto e: Normal\n");
    } else {
        printf("A classificacao do produto e: Caro\n");
    }

    return 0;
}