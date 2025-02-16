#include <stdio.h>

void mostrarMenu() {
    printf("\n--- Calculadora ---");
    printf("\n1 - Soma");
    printf("\n2 - Subtração");
    printf("\n3 - Multiplicação");
    printf("\n4 - Divisão");
    printf("\n5 - Sair");
    printf("\nEscolha: ");
}

void lerNumeros(float *num1, float *num2) {
    printf("\nDigite o primeiro número: ");
    scanf("%f", num1);
    printf("Digite o segundo número: ");
    scanf("%f", num2);
}

void soma() {
    float num1, num2;
    lerNumeros(&num1, &num2);
    printf("\nResultado da soma: %.2f\n", num1 + num2);
}

void subtracao() {
    float num1, num2;
    lerNumeros(&num1, &num2);
    printf("\nResultado da subtração: %.2f\n", num1 - num2);
}

void multiplicacao() {
    float num1, num2;
    lerNumeros(&num1, &num2);
    printf("\nResultado da multiplicação: %.2f\n", num1 * num2);
}

void divisao() {
    float num1, num2;
    lerNumeros(&num1, &num2);
    if (num2 == 0) {
        printf("\nErro! Divisão por zero não é permitida.\n");
    } else {
        printf("\nResultado da divisão: %.2f\n", num1 / num2);
    }
}

int main() {
    int op;
    
    do {
        mostrarMenu();
        scanf("%d", &op);

        switch (op) {
            case 1: soma(); break;
            case 2: subtracao(); break;
            case 3: multiplicacao(); break;
            case 4: divisao(); break;
            case 5: printf("\nSaindo...\n"); break;
            default: printf("\nOpção inválida! Escolha um número entre 1 e 5.\n");
        }
    } while (op != 5);

    return 0;
}
