#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j, contador = 0;

    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }

    printf("A matriz possui %d valores maiores que 10.\n", contador);

    return 0;
}
