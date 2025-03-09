#include <stdio.h>

typedef struct {
    int num;
} tabuada;

void simularTabuada(tabuada *T) {
    int i;

    printf("\n--- Tabuada do %d ---\n", T->num);
    
    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", T->num, i, T->num * i);
    }
    
}

int main() {
    tabuada T;

    printf("--- TABUADA ---"); 
    printf("\nDigite um numero para ver sua tabuada: ");
    scanf("%d", &T.num);

    simularTabuada(&T);

    return 0;
}