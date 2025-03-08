#include <stdio.h>
#define TF 4

struct gerenciador_de_notas {
    float nota_Mat[TF], nota_Por[TF], nota_His[TF], nota_Geo[TF], nota_Fis[TF], nota_Qui[TF], nota_Bio[TF], nota_Ing[TF], nota_Edu[TF];
};

void bimestres(struct gerenciador_de_notas *N) {
    float soma=0, media_FINAL=0;
    int pos=0;

    for (pos = 0; pos < TF; pos++) {
        printf("\n--- POR BIMESTRE ---");
        printf("\nNOTA de Matematica: ");
        scanf("%f", &N->nota_Mat[pos]);
        printf("\nNOTA de Portugues: ");
        scanf("%f", &N->nota_Por[pos]);
        printf("\nNOTA de Historia: ");
        scanf("%f", &N->nota_His[pos]);
        printf("\nNOTA de Geografia: ");
        scanf("%f", &N->nota_Geo[pos]);
        printf("\nNOTA de Fisica: ");
        scanf("%f", &N->nota_Fis[pos]);
        printf("\nNOTA de Quimica: ");
        scanf("%f", &N->nota_Qui[pos]);
        printf("\nNOTA de Biologia: ");
        scanf("%f", &N->nota_Bio[pos]);
        printf("\nNOTA de Ingles: ");
        scanf("%f", &N->nota_Ing[pos]);
        printf("\nNOTA de Educacao-Fisica: ");
        scanf("%f", &N->nota_Edu[pos]);
    }
    
    for (pos = 0; pos < TF; pos++)
    {
        soma += N->nota_Mat[pos];
        soma += N->nota_Por[pos];
        soma += N->nota_His[pos];
        soma += N->nota_Geo[pos];
        soma += N->nota_Fis[pos];
        soma += N->nota_Qui[pos];
        soma += N->nota_Bio[pos];
        soma += N->nota_Ing[pos];
        soma += N->nota_Edu[pos];
    }
    
    
    media_FINAL = soma / (TF * 9);
    
    if (media_FINAL >= 6.00) {
        printf("\nParabens sua media final e: %.2f", media_FINAL);
        printf("\nAPROVADO!");
    }
    else {
        printf("\nNao foi desta vez sua media final e: %.2f", media_FINAL);
        printf("\nREPROVADO!");
    }
}

int main() {
    struct gerenciador_de_notas N;

    printf("\n---GERENCIADOR DE NOTAS---");
    printf("\nOla professor / aluno");
    bimestres(&N);

    return 0;
}