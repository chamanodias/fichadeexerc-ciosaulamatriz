#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
    int maior_valor = matriz[0][0];
    int linha_maior, coluna_maior;

    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > maior_valor) {
                maior_valor = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    printf("Matriz:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("O maior valor na matriz é %d, localizado na linha %d e coluna %d.\n", maior_valor, linha_maior+1, coluna_maior+1);

    return 0;
}
