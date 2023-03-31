/*
Função : Calcula a quantidade de tempo para dissolver uma massa radiativa
Autor : Anderson Vilela
Data : 30 Março 2023
Observações: void
*/

#include <stdio.h>


int main() {

  double initial_mass, current_mass;
    int tempo = 0;

    printf("Digite a massa inicial em gramas: ");
    scanf("%lf", &initial_mass);

    current_mass = initial_mass;

    while (current_mass >= 0.05) {
        current_mass /= 2.0;
        tempo += 50;
    }

    printf("Tempo necessário para a massa se tornar menor que 0.05 gramas: %d segundos", tempo);

    return 0;
}