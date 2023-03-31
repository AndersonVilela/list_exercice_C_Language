/*
Função : programa que resolve o cubo  da soma de (x + y)³ = x³ + 3x²y + 3xy² + y³ usando funções anteriores
Autor : Anderson Vilela
Data : 30 Março 2023
Observações: void
*/

#include <stdio.h>


 int square(int num) {
    return num * num;
}

int cube(int num) {
    return num * num * num;
}

int cube_soma(int x, int y) {
    int x_square = square(x);
    int y_square = square(y);
    int x_cube = cube(x);
    int y_cube = cube(y);
    return x_cube + 3 * x_square * y + 3 * x * y_square + y_cube;
}

int main() {
    int resultado = cube_soma(3, 4);
    printf("resultado %d", resultado);
    return 0;
}