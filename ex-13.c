#include<stdio.h>

int main() {
    int preco_cons, custo_fab;

    printf("Informe o custo de fabrica do carro que deseja: ");
    scanf("%i", &custo_fab);

    if (custo_fab <= 15000) {
        preco_cons = custo_fab + custo_fab * 0.05;
        printf("O preco do consumidor do carro e de: %i", preco_cons);
    } else if (custo_fab > 15000 && custo_fab <= 25000) {
        preco_cons = custo_fab + (custo_fab * 0.1) + (custo_fab * 0.15);
        printf("O preco do consumidor do carro e de: %i", preco_cons);
    } else {
        preco_cons = custo_fab + (custo_fab * 0.15) + (custo_fab * 0.2);
        printf("O preco do consumidor do carro e de: %i", preco_cons);
    }
}