#include <stdlib.h>
#include <stdio.h>


void _diagsum(int n) {
    int N = 10;
    int sum =0;
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int num = 0; num < n; num++) {
            int value = rand() % (N + 1);
            matrix[i][num] = value;
            if (i == num) {
                sum += value;
            } else 
            if (i + num == n-1) {
                sum += value;
            }
            printf("%d ", matrix[i][num]);
        }
        printf("\n");
    }
    printf("\nSum: %d\n", sum);
}

int main() {
    int n;
    printf("Please enter the length of the square matrix ");
    scanf("%d", &n);
    _diagsum(n);
    return 0;
}