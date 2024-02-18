#include <stdio.h>

int main() {
    int idade = 0;
    float peso = 0.0;

    printf("Digite uma Idade:\n");
    scanf("%d", &idade);
    printf("Digite um Peso:\n");
    scanf("%f", &peso);
    printf("Idade Informada: %d.\n", idade);
    printf("Peso Informado: %f.\n", peso);
};