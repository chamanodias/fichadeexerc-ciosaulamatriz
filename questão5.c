#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j, x;
    int encontrado = 0;
    int linha_encontrado, coluna_encontrado;

    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o valor a ser buscado na matriz: ");
    scanf("%d", &x);

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] == x) {
                encontrado = 1;
                linha_encontrado = i;
                coluna_encontrado = j;
                break;
            }
        }
        if (encontrado) {
            break;
        }
    }

    if (encontrado) {
        printf("O valor %d foi encontrado na linha %d e coluna %d da matriz.\n", x, linha_encontrado+1, coluna_encontrado+1);
    } else {
        printf("O valor %d não foi encontrado na matriz.\n", x);
    }

    return 0;
}
