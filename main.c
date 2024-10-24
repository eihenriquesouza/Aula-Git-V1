#include <stdio.h>

int main() {
  int age;
  char name[50];
  float salary;

  printf("Oi. Informe seu nome: ");
  scanf("%s", name);

  printf("Agora, informe sua idade: ");
  scanf("%d", &age);

  printf("Informe seu salario: ");
  scanf("%f", &salary);

  printf("\n\n");

  printf("Nome: %s \nIdade: %d", name, age);
  printf("\nSalário: %.2f", salary);


  return 0;
}