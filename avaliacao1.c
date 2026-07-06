#include <stdio.h>

int main(){
    int numeros[20], maior = -9999, menor = 9999, media = 0, i, acumulador = 0, cont_media = 0;

    //entrada de dados
    for(i = 0; i < 20; i++){
        printf("Informe um número inteiro: ");
        scanf("%d", &numeros[i]);

        acumulador += numeros[i];

        if(numeros[i] > maior){
            maior = numeros[i];
        }
        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }

    media = acumulador / 20;

    for(i = 0; i < 20; i++){
        if(numeros[i] > media){
            cont_media++;
        }
    }

    //saída de dados
    for(i = 19; i >= 0; i--){
        printf("%d\n", numeros[i]);
    }
    printf("Quantidade de numeros maior que a media: %d\n", cont_media);
    printf("Maior valor armazenado: %d\n", maior);
    printf("Menor valor armazenado: %d\n", menor);
    printf("Média: %d", media);
}