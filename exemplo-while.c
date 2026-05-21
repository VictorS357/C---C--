#include<stdio.h>

int main() {
    int i, num, soma = 0;
    printf("\nEntre com um número diferente de 0: ");
    scanf("%d", &num);

    while (num != 0) {
        soma = soma + num;
        printf("\nEntre com um número diferente de 0: ");
        scanf("%d", &num);
    }
    printf("\n O somatório dos número é: %d", soma);    
}