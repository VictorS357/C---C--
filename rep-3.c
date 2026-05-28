#include<stdio.h>

int main() {
    int n, num, soma, res;
    printf("Informe a quantidade de numeros a serem lidos: ");
    scanf("%i", &n);

    for(int i = 1; i <= n; i++) {
        printf("Informe um numero: ");
        scanf("%i", &num);
        res = num * 3;
        printf("O resultado e: %i\n", res);
    }
}