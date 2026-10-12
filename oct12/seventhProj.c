#include <stdlib.h>
#include <stdio.h>

void _maxElements(int n) {
    int N = 10;
    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % (N + 1);
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }



    printf("\nRow-wise maximums:\n");
    for (int i = 0; i < n; i++) {
        int max = matrix[i][0];
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        printf("Row %d max: %d\n", i + 1, max);
    }
    printf("\nColumn-wise maximums:\n");

    for (int j = 0; j < n; j++) {
        int max = matrix[0][j];
        for (int i = 1; i < n; i++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        printf("Column %d max: %d\n", j + 1, max);
    }
}

int main() {
    int n;
    printf("Please enter the length of the square matrix: ");
    scanf("%d", &n);
    _maxElements(n);
    return 0;
}