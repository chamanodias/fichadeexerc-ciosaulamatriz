#include <stdio.h>

int main() {
    int TAMANHO = 5; 
    int matriz[TAMANHO][TAMANHO];
    int i, j;

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            matriz[i][j] = (i + 1) * (j + 1);
        }
    }

    printf("Matriz resultante:\n");
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
