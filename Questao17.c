/*
Função : calcula o numeros de arranjos de n objetos
Autor : Anderson Vilela
Data : 30 Março 2023
Observações: void
*/

#include <stdio.h>

int arrange(int n, int r) {
    int i, result = 1;
    for (i = n; i > n - r; i--) {
        result *= i;
    }
    return result;
}

int main() {
    int n = 5;
    int r = 2;
    int num_arrange = arrange(n, r);
    printf("O número de arranjos de %d objetos escolhidos %d a cada vez é: %d\n", n, r, num_arrange);
    return 0;
}
