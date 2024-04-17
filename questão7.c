#include <stdio.h>

int main() {
    int A[10][10];
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (i < j) {
                A[i][j] = 2 * i + 7 * j;
            } else if (i == j) {
                A[i][j] = 3 * i * i;
            } else {
                A[i][j] = 5 * j * j + 1;
            }
        }
    }

    printf("Matriz 10x10:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
