#include <stdio.h>
#include <string.h>

typedef struct {
    char user[50];
    float saldo, depositar, saque;
} dados; // Estrutura de dados para armazenar informações do usuário

int login(dados *D) {
    char senha[20], senhaCorreta[] = "1234";

    printf("\nUsuario: ");
    fgets(D->user, sizeof(D->user), stdin);
    D->user[strcspn(D->user, "\n")] = 0;

    printf("\nSenha: ");
    fgets(senha, sizeof(senha), stdin);
    senha[strcspn(senha, "\n")] = 0;

    if (strcmp(senha, senhaCorreta) == 0) {
        return 1;
    } else {
        printf("\nSenha incorreta!");
        return 0;
    }
} // Função para realizar o login do usuário

void deposito(dados *D) {
    printf("\nDigite o valor do deposito: ");
    scanf("%f", &D->depositar);

    if (D->depositar > 0) {
        D->saldo += D->depositar;
        printf("\n%s deposito feito com sucesso!", D->user);
    } else {
        printf("\nImpossivel depositar 0 ou um valor negativo!");
    }
} // Função para realizar o depósito

void saque(dados *D) {
    printf("\nDigite o valor do saque: ");
    scanf("%f", &D->saque);

    if (D->saque <= D->saldo) {
        D->saldo -= D->saque;
        printf("\n%s saque feito com sucesso!", D->user);
    } else if (D->saque > D->saldo) {
        printf("\nSaldo insuficiente! Seu saldo atual é: %.2f", D->saldo);
        printf("\nValor solicitado nao disponivel para saque.");
        printf("\nTente um valor menor ou consulte seu saldo.");
    } else {
        printf("\nImpossivel sacar 0 ou um valor negativo!");
    }
} // Função para realizar o saque

void saldo(dados *D) {
    printf("\nSaldo disponivel: %.2f", D->saldo);
} // Função para exibir o saldo do usuário

int main() {
    dados D;
    int op;
    
    if (login(&D)) {
        do {
            printf("\n--- MENU ---");
            printf("\n1 - Depositar");
            printf("\n2 - Saque");
            printf("\n3 - Ver saldo");
            printf("\n4 - Sair");
            printf("\nEscolha: ");
            scanf("%d", &op);
            getchar();
    
            switch (op) {
            case 1:
                    do
                    {
                        printf("\n--- DEPOSITOS ---");
                        printf("\nBem vindo %s!", D.user);
                        deposito(&D);

                        printf("\n1 - Continuar");
                        printf("\n2 - Retornar");
                        printf("\nEscolha: ");
                        scanf("%d", &op);
                    } while (op != 2);                                 
                break;
            case 2:
                    do
                    {
                        printf("\n--- SAQUES ---");
                        printf("\nBem vindo %s!", D.user);
                        saque(&D);

                        printf("\n1 - Continuar");
                        printf("\n2 - Retornar");
                        printf("\nEscolha: ");
                        scanf("%d", &op);
                    } while (op !=2);
                    
                break;
            case 3:
                    do
                    {
                        printf("\n--- SALDO ---");
                        printf("\nBem vindo %s!", D.user);
                        saldo(&D);

                        printf("\n1 - Continuar");
                        printf("\n2 - Retornar");
                        printf("\nEscolha: ");
                        scanf("%d", &op);
                    } while (op != 2);
                    
                break;
            case 4:
                    if (op == 4) {
                        printf("\nDeseja realmente sair? ");
                        printf("\n1 - sim");
                        printf("\n2 - nao");
                        printf("\nEscolha: ");
                        scanf("%d", &op);

                        if (op == 1) {
                            printf("\nSAINDO...");
                            return 0;
                        } 
                    }
                break;
            default:
                    printf("\nDigite uma opcao valida!");
                break;
            }
    
        } while (op != 4);
    } else {
        printf("\nSenha incorreta!");
    }
    
    return 0;
} // Função principal que controla o fluxo do programa

// Ideias para futuros upgrades: Armazenar os dados em arquivos, utilizar vetores para suportar múltiplos cadastros e criptografar a senha, evitando que ela fique visível no código principal.

