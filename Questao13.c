/*
Função : retorna o valor de um ângulo de graus para radianos 
Autor : Anderson Vilela
Data : 30 Março 2023
Observações: void
*/

#include <stdio.h>


float RandianConverter(float g) {

  return (g * 3.14159265)/180;
}

int main()
{
  float result = RandianConverter(20);

  printf("O resultado é %f", result);
  return 0;
}
