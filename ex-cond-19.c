#include<stdio.h>

int main() {
    float preco, aumento, imposto, novoPreco;
    int categoria;
    char situacao;

    printf("Informe o preco do produto: ");
    scanf("%f", &preco);

    printf("Informe a categoria que o produto se encaixa: ");
    scanf("%i", &categoria);

    printf("Informe se o produto precisa ou nao de refrigeracao (N - nao R - sim): ");
    scanf(" %c", &situacao);

    if (preco <= 25) {
        switch(categoria) {
            case 1: 
                aumento = preco * 0.05;
                imposto = preco * 0.05;
                novoPreco = preco + aumento - imposto;
                if (novoPreco <= 50) {
                    printf("O valor do aumento foi de: R$%.2f\n", aumento);
                    printf("O valor do imposto foi de: R$%.2f\n", imposto);
                    printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                    printf("A classificacao do produto e barato");
                } else if (novoPreco < 120) {
                    printf("O valor do aumento foi de: R$%.2f\n", aumento);
                    printf("O valor do imposto foi de: R$%.2f\n", imposto);
                    printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                    printf("A classificacao do produto e normal");
                } else if (novoPreco >= 120) {
                    printf("O valor do aumento foi de: R$%.2f\n", aumento);
                    printf("O valor do imposto foi de: R$%.2f\n", imposto);
                    printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                    printf("A classificacao do produto e caro");
                }
                break;
            case 2: 
                aumento = preco * 0.08;
                if (situacao == 'R' || situacao == 'r') {
                    imposto = preco * 0.08;
                    novoPreco = preco + aumento - imposto;
                    if (novoPreco <= 50) {
                        printf("O valor do aumento foi de: R$%.2f\n", aumento);
                        printf("O valor do imposto foi de: R$%.2f\n", imposto);
                        printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                        printf("A classificacao do produto e barato");
                    } else if (novoPreco < 120) {
                        printf("O valor do aumento foi de: R$%.2f\n", aumento);
                        printf("O valor do imposto foi de: R$%.2f\n", imposto);
                        printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                        printf("A classificacao do produto e normal");
                    } else if (novoPreco >= 120) {
                        printf("O valor do aumento foi de: R$%.2f\n", aumento);
                        printf("O valor do imposto foi de: R$%.2f\n", imposto);
                        printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                        printf("A classificacao do produto e caro");
                    }
                } else {
                    imposto = preco * 0.05;
                    novoPreco = preco + aumento - imposto;
                    if (novoPreco <= 50) {
                        printf("O valor do aumento foi de: R$%.2f\n", aumento);
                        printf("O valor do imposto foi de: R$%.2f\n", imposto);
                        printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                        printf("A classificacao do produto e barato");
                    } else if (novoPreco < 120) {
                        printf("O valor do aumento foi de: R$%.2f\n", aumento);
                        printf("O valor do imposto foi de: R$%.2f\n", imposto);
                        printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                        printf("A classificacao do produto e normal");
                    } else if (novoPreco >= 120) {
                        printf("O valor do aumento foi de: R$%.2f\n", aumento);
                        printf("O valor do imposto foi de: R$%.2f\n", imposto);
                        printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                        printf("A classificacao do produto e caro");
                    }
                }
                break;
            case 3:    
                aumento = preco * 0.1;
                imposto = preco * 0.05;
                novoPreco = preco + aumento - imposto;
                if (novoPreco <= 50) {
                    printf("O valor do aumento foi de: R$%.2f\n", aumento);
                    printf("O valor do imposto foi de: R$%.2f\n", imposto);
                    printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                    printf("A classificacao do produto e barato");
                } else if (novoPreco < 120) {
                    printf("O valor do aumento foi de: R$%.2f\n", aumento);
                    printf("O valor do imposto foi de: R$%.2f\n", imposto);
                    printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                    printf("A classificacao do produto e normal");
                } else if (novoPreco >= 120) {
                    printf("O valor do aumento foi de: R$%.2f\n", aumento);
                    printf("O valor do imposto foi de: R$%.2f\n", imposto);
                    printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                    printf("A classificacao do produto e caro");
                }
                break;
        }
    } else {
        switch(categoria) {
            case 1: 
                aumento = preco * 0.12;
                imposto = preco * 0.05;
                novoPreco = preco + aumento - imposto;
                if (novoPreco <= 50) {
                    printf("O valor do aumento foi de: R$%.2f\n", aumento);
                    printf("O valor do imposto foi de: R$%.2f\n", imposto);
                    printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                    printf("A classificacao do produto e barato");
                } else if (novoPreco < 120) {
                    printf("O valor do aumento foi de: R$%.2f\n", aumento);
                    printf("O valor do imposto foi de: R$%.2f\n", imposto);
                    printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                    printf("A classificacao do produto e normal");
                } else if (novoPreco >= 120) {
                    printf("O valor do aumento foi de: R$%.2f\n", aumento);
                    printf("O valor do imposto foi de: R$%.2f\n", imposto);
                    printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                    printf("A classificacao do produto e caro");
                }
                break;
            case 2: 
                aumento = preco * 0.15;
                if (situacao == 'R' || situacao == 'r') {
                    imposto = preco * 0.08;
                    novoPreco = preco + aumento - imposto;
                    if (novoPreco <= 50) {
                        printf("O valor do aumento foi de: R$%.2f\n", aumento);
                        printf("O valor do imposto foi de: R$%.2f\n", imposto);
                        printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                        printf("A classificacao do produto e barato");
                    } else if (novoPreco < 120) {
                        printf("O valor do aumento foi de: R$%.2f\n", aumento);
                        printf("O valor do imposto foi de: R$%.2f\n", imposto);
                        printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                        printf("A classificacao do produto e normal");
                    } else if (novoPreco >= 120) {
                        printf("O valor do aumento foi de: R$%.2f\n", aumento);
                        printf("O valor do imposto foi de: R$%.2f\n", imposto);
                        printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                        printf("A classificacao do produto e caro");
                    }
                } else {
                    imposto = preco * 0.05;
                    novoPreco = preco + aumento - imposto;
                    if (novoPreco <= 50) {
                        printf("O valor do aumento foi de: R$%.2f\n", aumento);
                        printf("O valor do imposto foi de: R$%.2f\n", imposto);
                        printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                        printf("A classificacao do produto e barato");
                    } else if (novoPreco < 120) {
                        printf("O valor do aumento foi de: R$%.2f\n", aumento);
                        printf("O valor do imposto foi de: R$%.2f\n", imposto);
                        printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                        printf("A classificacao do produto e normal");
                    } else if (novoPreco >= 120) {
                        printf("O valor do aumento foi de: R$%.2f\n", aumento);
                        printf("O valor do imposto foi de: R$%.2f\n", imposto);
                        printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                        printf("A classificacao do produto e caro");
                    }
                }
                break;
            case 3:    
                aumento = preco * 0.18;
                imposto = preco * 0.05;
                novoPreco = preco + aumento - imposto;
                if (novoPreco <= 50) {
                    printf("O valor do aumento foi de: R$%.2f\n", aumento);
                    printf("O valor do imposto foi de: R$%.2f\n", imposto);
                    printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                    printf("A classificacao do produto e barato");
                } else if (novoPreco < 120) {
                    printf("O valor do aumento foi de: R$%.2f\n", aumento);
                    printf("O valor do imposto foi de: R$%.2f\n", imposto);
                    printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                    printf("A classificacao do produto e normal");
                } else if (novoPreco >= 120) {
                    printf("O valor do aumento foi de: R$%.2f\n", aumento);
                    printf("O valor do imposto foi de: R$%.2f\n", imposto);
                    printf("O novo preco do produto e de: R$%.2f\n", novoPreco);
                    printf("A classificacao do produto e caro");
                }
                break;
        }
    }
}