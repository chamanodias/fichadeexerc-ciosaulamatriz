#include <stdio.h>

int main() {
    int matriz1[4][4], matriz2[4][4], matriz_maior[4][4];
    int i, j;

    printf("Digite os elementos da primeira matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz1[i][j] > matriz2[i][j]) {
                matriz_maior[i][j] = matriz1[i][j];
            } else {
                matriz_maior[i][j] = matriz2[i][j];
            }
        }
    }

    printf("A terceira matriz com os maiores valores de cada posição:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz_maior[i][j]);
        }
        printf("\n");
    }

    return 0;
}
