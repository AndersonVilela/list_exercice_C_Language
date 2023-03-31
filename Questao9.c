/*
Função : calcula a diferença entre duas horas distintas de um mesmo dia 
Autor : Anderson Vilela
Data : 30 Março 2023
Observações: void
*/

#include <stdio.h>

struct time {
    int hora;
    int minuto;
};

void difHours(struct time h1, struct time h2);

int main() {
    struct time h1, h2;

    printf("Digite o primeiro horario (hh:mm): ");
    scanf("%d:%d", &h1.hora, &h1.minuto);

    printf("Digite o segundo horario (hh:mm): ");
    scanf("%d:%d", &h2.hora, &h2.minuto);

    difHours(h1, h2);

    return 0;
}

void difHours(struct time h1, struct time h2) {
    int diff_h, diff_m;

    diff_m = h2.minuto - h1.minuto;
    diff_h = h2.hora - h1.hora;

    if (diff_m < 0) {
        diff_m += 60;
        diff_h--;
    }

    if (diff_h < 0) {
        diff_h += 24;
    }

    printf("A diferenca entre os horarios eh: %02d:%02d\n", diff_h, diff_m);
}