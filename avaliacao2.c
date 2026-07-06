#include <stdio.h>

int main(){
    int numeros[15], pesquisa, i, numeros_pares[15], j = 0, cont = 0, soma_par = 0;
    //entrada de dados
    printf("Informe um número para pesquisa: ");
    scanf("%d", &pesquisa);
    for(i = 0; i < 15; i++){
        printf("Informe um número inteiro: ");
        scanf("%d", &numeros[i]);

        if(pesquisa == numeros[i]){
            cont++;
            printf("Número encontrado na posição %d\n", i);
        }
    }
    for(i = 0; i < 15; i++){
        if(numeros[i] % 2 == 0){
            numeros_pares[j] = numeros[i];
            soma_par += numeros_pares[j];
            j++;
        }
    }
    //saída de dados

    if(cont > 0){
        printf("O número da pesquisa foi encontrado\n");
    }else{
         printf("O número da pesquisa não foi encontrado\n");
    }
    for(i = 0; i < j; i++){
        printf("%d\n", numeros_pares[i]);
    } 
    printf("Soma pares: %d\n", soma_par);
    printf("O número pesquisado aparece %d vezes no vetor original", cont);
}