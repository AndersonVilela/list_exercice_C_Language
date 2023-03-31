/*
Função : retorna de o número e primo ou não
Autor : Anderson Vilela
Data : 30 Março 2023
Observações: void
*/

#include <stdio.h>

int isPrime(int num) {
    int i;
    if(num <= 1) return 0; 
    for(i=2; i<=num/2; i++) {
        if(num%i == 0) return 0; 
    }
    return 1; 

