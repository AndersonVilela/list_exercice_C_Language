/*
Função : imprimi divisores
Autor : Anderson Vilela
Data : 30 Março 2023
Observações: void
*/

#include <stdio.h>

int divisors(int num)
{
  for (int i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      printf("%i ", i);
    }
  }
  return 0;
}

int main()
{

  int num;

  printf("Digite um valor:");
  scanf("%i", &num);
  printf("%i ", divisors(num));

  while (num > 0)
  {
    printf("Digite um valor:");
    scanf("%i", &num);
    printf("%i ", divisors(num));
  }
  return 0;
}