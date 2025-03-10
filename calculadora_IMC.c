#include <stdio.h>

typedef struct {
    float altura, peso, calculo;
} dados;

void compararDados(dados *D) {

    D->calculo = D->peso / (D->altura * D->altura);   

    if (D->calculo <= 18.5) {
        printf("\n%.2f - Abaixo do peso", D->calculo);
    }
    else if (D->calculo >= 18.5 && D->calculo <= 24.9) {
        printf("\n%.2f - Peso normal", D->calculo);
    }
    else if (D->calculo >= 25 && D->calculo <= 29.9) {
        printf("\n%.2f - Sobrepeso", D->calculo);
    }
    else if (D->calculo >= 30 && D->calculo <= 34.9) {
        printf("\n%.2f - Obesidade Grau 1", D->calculo);
    }
    else if (D->calculo >= 35 && D->calculo <= 39.9) {
        printf("\n%.2f - Obesidade Grau 2", D->calculo);
    }
    else if (D->calculo >= 40) {
        printf("\n%.2f - Obesidade Grau 3", D->calculo);
    }

}

int main() {
    dados D;

    do
    {
        printf("\n--- Calculadora de IMC ---");
        printf("\nDigite sua altura em M: ");
        scanf("%f", &D.altura);
        printf("\nDigite seu peso em KG: ");
        scanf("%f", &D.peso);

        if (D.peso <= 0 || D.altura <= 0)
        {
            printf("\nERRO! Insira um numero valido!\n");
        }
        else {
            compararDados(&D);
        }
        
    } while (D.peso <= 0 || D.altura <= 0);

    return 0;
}