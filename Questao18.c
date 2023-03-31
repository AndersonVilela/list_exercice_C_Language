/* calcula o valor de desconto determinado pelo combustivel do automovel
Função :
Autor : Anderson Vilela
Data : 30 Março 2023
Observações: void
*/

#include <stdio.h>

float calcDiscount(float value, int tipoCombustivel)
{
  float discount;

  switch (tipoCombustivel)
  {
  case 1: 
    discount = 0.28f;
    break;
  case 2: 
    discount = 0.22f;
    break;
  case 3: 
    discount = 0.12f;
    break;
  default:
    printf("Tipo de combustível inválido\n");
    return 0;
  }

  float valueDiscount = value * discount;
  float finalValue = value - valueDiscount;

  printf("value do desconto: %.2f\n", valueDiscount);
  printf("value a ser pago pelo cliente: %.2f\n", finalValue);

  return finalValue;
}

int main()
{
  float totalValue = 0;
  float value;
  int tipoCombustivel;

  do
  {
    printf("Digite o valor bruto do veículo (ou 0 para sair): ");
    scanf("%f", &value);

    if (value > 0)
    {
      printf("Digite o tipo de combustível (1-Álcool, 2-Gasolina, 3-Diesel): ");
      scanf("%d", &tipoCombustivel);

      totalValue += calcDiscount(value, tipoCombustivel);
    }
  } while (value > 0);

  printf("value total de desconto: %.2f\n", totalValue);

  return 0;
}