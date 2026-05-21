#include<stdio.h>
#include<conio.h>

int main() {
    int senha;

    do{
        printf("--PORTA SECRETA--\n");
        printf("Digite a senha para abrir: \n");
        scanf("%d", &senha);

        if (senha != 1234) {
            printf("Senha incorreta \n");
        }
    }while(senha != 1234);
    printf("Porta aberta \n");

    getch();
}