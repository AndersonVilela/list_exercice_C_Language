/*
Função :  calcula a velocidade media de um percursp
Autor : Anderson Vilela
Data : 30 Março 2023
Observações: void
*/

#include <stdio.h>

float calculaVM(float espaco, float tempo) {
    float vm = espaco/tempo;
    return vm*3.6; 
}
