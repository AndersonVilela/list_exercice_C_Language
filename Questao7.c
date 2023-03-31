/*
Função : que calcula a distancia entre dois pontos
Autor : Anderson Vilela
Data : 30 Março 2023
Observações: void
*/

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    printf("Digite as coordenadas do ponto A:\n");
    printf("x1: ");
    scanf("%f", &x1);
    printf("y1: ");
    scanf("%f", &y1);

    printf("Digite as coordenadas do ponto B:\n");
    printf("x2: ");
    scanf("%f", &x2);
    printf("y2: ");
    scanf("%f", &y2);

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("A distância entre os pontos A(%.2f, %.2f) e B(%.2f, %.2f) é %.2f\n", x1, y1, x2, y2, distancia);

    return 0;
}