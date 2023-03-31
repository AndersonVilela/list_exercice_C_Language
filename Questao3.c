/*
Função : Função que retorna o cubo de um número
Autor : Anderson Vilela
Data : 28 Março 2023
Observações: void
*/

#include <stdio.h>

int cube(int num)
{
  return num * num * num;
}

int main()
{
  int result = cube(3);
  printf("%d", result);

  return 0;
}
