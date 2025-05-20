#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Calculadora de IMC\n");
    printf("------------------\n");

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros (ex: 1.75): ");
    scanf("%f", &altura);

    if (altura <= 0) {
        printf("Altura inválida!\n");
        return 1;
    }

    imc = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5)
        printf("Classificação: Abaixo do peso\n");
    else if (imc < 25)
        printf("Classificação: Peso normal\n");
    else if (imc < 30)
        printf("Classificação: Sobrepeso\n");
    else
        printf("Classificação: Obesidade\n");

    return 0;
}
