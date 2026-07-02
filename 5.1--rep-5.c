#include<stdio.h>
int main() {
    int num_carteira, num_multa, divida=0, maior_cart, total;
    float valor_multa;

    printf("Informe o número da sua carteira: ");
    scanf("%d", &num_carteira);

    while (num_carteira != 0) {
        printf("Informe o número de multas que vc tem: ");
        scanf("%d", &num_multa);
        for (int i = 0; i < num_multa; i++)
        {
            printf("Informe o valor de cada multa: ");
            scanf("%f", &valor_multa);
            divida = divida + valor_multa;
        }
        printf("O valor da dívida é: %d\n", divida);
        

        printf("Informe o número da sua carteira: ");
        scanf("%d", &num_carteira);
    }
    total = total + divida;
    printf("O valor total arrecadado é: %d", total);
}