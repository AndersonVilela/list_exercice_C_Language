/* calcula o IMC (indice de massa corporal)
Função : 
Autor : Anderson Vilela
Data : 30 Março 2023
Observações: void
*/

#include <stdio.h>

int main() {
     double weight, height, imc;

    printf("Digite o peso em kg: ");
    scanf("%lf", &weight);

    printf("Digite a altura em metros: ");
    scanf("%lf", &height);

    imc = weight / (height * height);

    printf("IMC = %.2lf\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 25.0) {
        printf("Normal\n");
    } else if (imc >= 25.0 && imc < 30.0) {
        printf("Acima do peso\n");
    } else {
        printf("Obeso\n");
    }

    return 0;

}