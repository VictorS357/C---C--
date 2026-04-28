#include<stdio.h>

int main() {
  int salario, resultado;

  printf("Insira seu salario: ");
  scanf("%i", &salario);

  if (salario <= 600) {
    printf("isento");
  }
}