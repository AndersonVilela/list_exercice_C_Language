/*
Função : Programa que retorna o valor do produto notavel
Autor : Anderson Vilela
Data : 30 Março 2023
Observações: void
*/

#include <stdio.h>

int square(int num)
{
  return num * num;
}

int productNotavel(int x, int y)
{
  int x_square = square(x);
  int y_square = square(y);
  return x_square + 2 * x * y + y_square;
}

int main()
{

  int resultado = productNotavel(3, 4);
  printf("%d", resultado);

  return 0;
}
