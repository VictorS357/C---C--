#include<stdio.h>
#include<conio.h>

int main() {
    int i, num, cont = 0;

    printf("Digite um número diferente de 0: ");
    scanf("%d", &num);

    do{
        printf("Entre com números diferente de 0: \n");
        scanf("%d", &num);

        cont++;
    }while (num != 0); 

    printf("Quantidade de vezes repetidas: %d", &cont);

    getch();
    //return;
}