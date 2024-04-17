#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int soma_acima_diagonal = 0;

    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 3; j++) {
            soma_acima_diagonal += matriz[i][j];
        }
    }

    printf("A soma dos elementos acima da diagonal principal é: %d\n", soma_acima_diagonal);

    return 0;
}
