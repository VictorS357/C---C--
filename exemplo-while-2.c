#include<stdio.h>

int main() {
    int i, num, cont = 0;
    printf("\nEntre com um número diferente de 0: ");
    scanf("%d", &num);

    while (num != 0) {
        if (num > 0) {
            cont++;
        }
        printf("\n Entre com um número diferente de 0: ");
        scanf("%d", &num);
    }
    printf("\n O somatório dos número é: %d", cont);    
}