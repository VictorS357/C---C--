#include <stdio.h>

int main() {
    int numero, i;

    for(numero = 1; numero <= 10; numero++) {

        printf("Tabuada do %d:\n", numero);

    
        for(i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

        printf("\n");
    }
}