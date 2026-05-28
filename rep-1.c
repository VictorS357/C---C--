#include<stdio.h>
#include<math.h>

int main() {
    int num, raiz;
    for (int i = 1; i <= 4; i++) {
        printf("Informe um numero: ");
        scanf("%i", &num);
        raiz = sqrt(num);
        printf("O resultado e: %i\n", raiz);
    }
}