/*
Função : programa que retorna a media (aritimetica, harmonica, geometrica, quadratica)
Autor : Anderson Vilela
Data : 30 Março 2023
Observações: void
*/

#include <stdio.h>
#include <math.h>




int main() {
    float a, b, c, d;
    float media_aritmetica, media_harmonica, media_geometrica, media_quadratica;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    printf("Digite o valor de d: ");
    scanf("%f", &d);

    media_aritmetica = (a + b + c + d) / 4;
    media_harmonica = 4 / ((1/a) + (1/b) + (1/c) + (1/d));
    media_geometrica = pow((a * b * c * d), 0.25);
    media_quadratica = sqrt((a * a + b * b + c * c + d * d) / 4);

    printf("Média Aritmética: %.2f\n", media_aritmetica);
    printf("Média Harmônica: %.2f\n", media_harmonica);
    printf("Média Geométrica: %.2f\n", media_geometrica);
    printf("Média Quadrática: %.2f\n", media_quadratica);

    return 0;
}
