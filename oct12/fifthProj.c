#include <stdlib.h>
#include <stdio.h>

void _columnAverage(int n) {
    int N = 10;
    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % (N + 1);
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nAverage of each column:\n");

    for (int j = 0; j < n; j++) {
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += matrix[i][j];
        }

        double average = (double) sum / n;

        printf("Column %d: %.2f\n", j + 1, average);
    }
}

int main() {
    int n;
    printf("Please enter the length of the square matrix: ");
    scanf("%d", &n);
    _columnAverage(n);
    return 0;
}