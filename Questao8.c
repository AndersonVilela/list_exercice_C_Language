/*
Função :  calcula a area de uma esfera
Autor : Anderson Vilela
Data : 30 Março 2023
Observações: void
*/

#include <stdio.h>

double sfareArea(float raio);

int main() {
    float raio;
    double area;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    area = sfareArea(raio);

    printf("A area da esfera de raio %.2f e: %.2f\n", raio, area);

    return 0;
}

double sfareArea(float raio) {
    double pi = 3.14159265;
    double area = 4 * pi * raio * raio;

    return area;
}