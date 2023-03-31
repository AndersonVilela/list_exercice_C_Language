/*
Função : Calcula o  salario
Autor : Anderson Vilela
Data : 28 Março 2023
Observações: void
*/

#include <stdio.h>
#include <math.h>

int main()
{
  float hourValue, numOfClass, discountInss, salaryBrut, liquidSalary;

  printf("Digite o valor da hora-aula: ");
  scanf("%f",  &hourValue);

  printf("Digite o número de aulas dadas no mês: ");
  scanf("%f", &numOfClass);

  printf("Digite o percentual de desconto do INSS: ");
  scanf("%f", &discountInss);

  salaryBrut = hourValue * numOfClass;

  float desconto = salaryBrut * (discountInss / 100.0);
  
  liquidSalary = salaryBrut - desconto;

  printf("Salário bruto: R$%.2f\n", salaryBrut);
  printf("Desconto INSS: R$%.2f\n", desconto);
  printf("Salário líquido: R$%.2f\n", liquidSalary);

  return 0;
}
