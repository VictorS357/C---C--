#include <stdio.h>

int main() {
    int aluno, i, aprovados;
    float nota, somaNotas, mediaAluno, somaTurma, mediaTurma, percentual;

    for(aluno = 1; aluno <= 20; aluno++) {

        somaNotas = 0;

        printf("Aluno %d\n", aluno);

        for(i = 1; i <= 5; i++) {
            printf("Digite a nota %d: ", i);
            scanf("%f", &nota);

            somaNotas += nota;
        }

        mediaAluno = somaNotas / 5;

        printf("Media do aluno %d: %.2f\n\n", aluno, mediaAluno);

        somaTurma += mediaAluno;

        if(mediaAluno >= 5.0) {
            aprovados++;
        }
    }

    mediaTurma = somaTurma / 20;

    percentual = (aprovados * 100.0) / 20;

    printf("Media da turma: %.2f\n", mediaTurma);

    printf("Percentual de alunos com media maior ou igual a 5: %.2f%%\n", percentual);
}