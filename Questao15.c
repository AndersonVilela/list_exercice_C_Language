/*
Função : calcula e retorna juros compostos
Autor : Anderson Vilela
Data : 30 Março 2023
Observações: void
*/

#include <stdio.h>
#include <math.h>

float compoundInterest(float capital, float interest, float years)
{
  float mount = capital * pow((1 + (interest / 100)), years);
  return mount;
}

int main()
{

  float capital, interest, years;

  printf("Digite o valor do seu capital investido: ");
  scanf("%f", &capital);

  printf("Digite o valor do juros ao ano: ");
  scanf("%f", &interest);

  printf("Digite quantos anos seu capital vai ficar investidos: ");
  scanf("%f", &years);

  printf("O resultado é: %f", compoundInterest(capital, interest, years));

  return 0;
}