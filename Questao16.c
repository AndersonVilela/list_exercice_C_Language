/*
Função : retorna o mẽs respectivo ao valor digitado
Autor : Anderson Vilela
Data : 30 Março 2023
Observações: void
*/

#include <stdio.h>

void printMes(int num)
{

  switch (num)
  {
  case 1:
    printf("Janeiro");
    break;
    case 2:
    printf("Fevereiro");
    break;
    case 3:
    printf("Março");
    break;
    case 4:
    printf("Abril");
    break;
    case 5:
    printf("Maio");
    break;
    case 6:
    printf("Junho");
    break;
    case 7:
    printf("Julho");
    break;
    case 8:
    printf("Agosto");
    break;
    case 9:
    printf("Setembro");
    break;
    case 10:
    printf("Outubro");
    break;
    case 11:
    printf("Novembro");
    break;
    case 12:
    printf("Dezembro");
    break;

  default:
    printf("Por favor digite um número entre 1 a 12");
    break;
  }
}

int main()
{
  int num;

  printf("por favor digite um número: ");
  scanf("%i", &num);

  printMes(num);

}