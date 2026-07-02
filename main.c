#include <stdio.h>
#include <string.h>

int main(){
    int idade, i = 1, feminino = 0, masculino = 0, pessoas = 0, soma = 0;
    float media_idade;
    char sexo;

    while(i != 0){
        printf("Digite 0 se você quer sair do loop: ");
        scanf("%d", &i);

        if(i == 0){
            break;
        }

        printf("Informe o sexo da pessoa (M - masculino e F - feminino): ");
        scanf(" %c", &sexo);

        printf("Informe a idade da pessoa: ");
        scanf("%d", &idade);

        // quantidade de pessoas para fazer a média
        pessoas++;

        // soma das idades (acumulador) para média
        soma += idade;

        if(sexo == 'M' || sexo == 'm'){
            //total masculino
            masculino++;
        } else if(sexo == 'F' || sexo == 'f'){
            //total feminino
            feminino++;
        }
    }
    media_idade = soma / (float)pessoas;

    printf("Masculino: %d\n", masculino);
    printf("Feminino: %d\n", feminino);
    printf("Média da idade: %.2f\n", media_idade);
}