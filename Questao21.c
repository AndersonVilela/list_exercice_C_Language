/*
Função : A sequencia de Fibonacci é uma sequência de números inteiros
Autor : Anderson Vilela
Data : 30 Março 2023
Observações: void
*/

#include <stdio.h>
#include <math.h>

double fibonacci(int n) {
    double phi = (1 + sqrt(5)) / 2;
    double fibonacci_n = (pow(phi, n) - pow(-phi, -n)) / sqrt(5);
    return fibonacci_n;
}

int main() {
    int n;

    printf("Digite um número n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        printf("%.0lf ", fibonacci(i));
    }

    printf("\n");

    return 0;
}