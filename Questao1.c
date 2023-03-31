/*
Função : Calcula o valor de hipotenusa
Autor : Anderson Vilela
Data : 28 Março 2023
Observações: void
*/

#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, result;

  printf("Digite o valor de a: ");
  scanf("%i", &a);

  printf("Digite o valor de b: ");
  scanf("%i", &b);

  result = sqrt(pow(a, 2) + pow(b, 2));

  printf("O valor de sua hipotenusa é %i", result);

  return 0;
}
