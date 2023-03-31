/*
Função : retorna o somatorio de todos os numeros entre 1 ao  número digitado
Autor : Anderson Vilela
Data : 30 Março 2023
Observações: void
*/

#include <stdio.h>

float somatory(int num)
{
  float somatoryTotal = 1;

  for (int i = 1; i <= num; i++)
  {
    somatoryTotal = somatoryTotal + i;
  }
  return somatoryTotal;
}

int main()
{

  float amount = somatory(5);

  printf("O resultado é: %f", amount);

  return 0;
}