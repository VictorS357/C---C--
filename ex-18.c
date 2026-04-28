#include<stdio.h>

int main() {
    float codProduto, quantProduto, precoTotNota, desconto, precoFinal;

    printf("Informe o codigo do produto: ");
    scanf("%f", &codProduto);

    printf("Informe a quantidade comprada do produto: ");
    scanf("%f", &quantProduto);

    if (codProduto >= 1 && codProduto <= 10) {
        precoTotNota = quantProduto * 10;
        printf("O preco unitario do produto e de: R$ 10.00");
        if (precoTotNota < 250) {
            desconto = precoTotNota * 0.05;
            precoFinal = precoTotNota - desconto;
            printf("O preco total da nota e de: R$%.2f\n", precoTotNota);
            printf("O valor do desconto aplicado foi de: R$%.2f\n", desconto);
            printf("O preco final do produto e de: R$%.2f\n", precoFinal);
        } else if (precoTotNota == 250 && precoTotNota <= 500) {
            desconto = precoTotNota * 0.1;
            precoFinal = precoTotNota - desconto;
            printf("O preco total da nota e de: R$%.2f\n", precoTotNota);
            printf("O valor do desconto aplicado foi de: R$%.2f\n", desconto);
            printf("O preco final do produto e de: R$%.2f\n", precoFinal);
        } else if (precoTotNota > 500) {
            desconto = precoTotNota * 0.15;
            precoFinal = precoTotNota - desconto;
            printf("O preco total da nota e de: R$%.2f\n", precoTotNota);
            printf("O valor do desconto aplicado foi de: R$%.2f\n", desconto);
            printf("O preco final do produto e de: R$%.2f\n", precoFinal);
        }
    } else if (codProduto >= 11 && codProduto <= 20) {
        precoTotNota = quantProduto * 15;
        printf("O preco unitario do produto e de: R$ 15.00");
        if (precoTotNota < 250) {
            desconto = precoTotNota * 0.05;
            precoFinal = precoTotNota - desconto;
            printf("O preco total da nota e de: R$%.2f\n", precoTotNota);
            printf("O valor do desconto aplicado foi de: R$%.2f\n", desconto);
            printf("O preco final do produto e de: R$%.2f\n", precoFinal);
        } else if (precoTotNota == 250 && precoTotNota <= 500) {
            desconto = precoTotNota * 0.1;
            precoFinal = precoTotNota - desconto;
            printf("O preco total da nota e de: R$%.2f\n", precoTotNota);
            printf("O valor do desconto aplicado foi de: R$%.2f\n", desconto);
            printf("O preco final do produto e de: R$%.2f\n", precoFinal);
        } else if (precoTotNota > 500) {
            desconto = precoTotNota * 0.15;
            precoFinal = precoTotNota - desconto;
            printf("O preco total da nota e de: R$%.2f\n", precoTotNota);
            printf("O valor do desconto aplicado foi de: R$%.2f\n", desconto);
            printf("O preco final do produto e de: R$%.2f\n", precoFinal);
        }
    } else if (codProduto >= 21 && codProduto <= 30) {
        precoTotNota = quantProduto * 20;
        printf("O preco unitario do produto e de: R$ 20.00");
        if (precoTotNota < 250) {
            desconto = precoTotNota * 0.05;
            precoFinal = precoTotNota - desconto;
            printf("O preco total da nota e de: R$%.2f\n", precoTotNota);
            printf("O valor do desconto aplicado foi de: R$%.2f\n", desconto);
            printf("O preco final do produto e de: R$%.2f\n", precoFinal);
        } else if (precoTotNota == 250 && precoTotNota <= 500) {
            desconto = precoTotNota * 0.1;
            precoFinal = precoTotNota - desconto;
            printf("O preco total da nota e de: R$%.2f\n", precoTotNota);
            printf("O valor do desconto aplicado foi de: R$%.2f\n", desconto);
            printf("O preco final do produto e de: R$%.2f\n", precoFinal);
        } else if (precoTotNota > 500) {
            desconto = precoTotNota * 0.15;
            precoFinal = precoTotNota - desconto;
            printf("O preco total da nota e de: R$%.2f\n", precoTotNota);
            printf("O valor do desconto aplicado foi de: R$%.2f\n", desconto);
            printf("O preco final do produto e de: R$%.2f\n", precoFinal);
        }
    } else if (codProduto >= 31 && codProduto <= 40) {
        precoTotNota = quantProduto * 30;
        printf("O preco unitario do produto e de: R$ 30.00");
        if (precoTotNota < 250) {
            desconto = precoTotNota * 0.05;
            precoFinal = precoTotNota - desconto;
            printf("O preco total da nota e de: R$%.2f\n", precoTotNota);
            printf("O valor do desconto aplicado foi de: R$%.2f\n", desconto);
            printf("O preco final do produto e de: R$%.2f\n", precoFinal);
        } else if (precoTotNota == 250 && precoTotNota <= 500) {
            desconto = precoTotNota * 0.1;
            precoFinal = precoTotNota - desconto;
            printf("O preco total da nota e de: R$%.2f\n", precoTotNota);
            printf("O valor do desconto aplicado foi de: R$%.2f\n", desconto);
            printf("O preco final do produto e de: R$%.2f\n", precoFinal);
        } else if (precoTotNota > 500) {
            desconto = precoTotNota * 0.15;
            precoFinal = precoTotNota - desconto;
            printf("O preco total da nota e de: R$%.2f\n", precoTotNota);
            printf("O valor do desconto aplicado foi de: R$%.2f\n", desconto);
            printf("O preco final do produto e de: R$%.2f\n", precoFinal);
        }
    }
}