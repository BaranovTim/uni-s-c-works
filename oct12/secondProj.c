#include <stdlib.h>
#include <stdio.h>

void _matrixmultipl(int n) {
    int CONST = 4;
    int matrix[CONST][CONST];

    for (int i = 0; i < 4; i++) {
        for (int num = 0; num < 4; num++) {
            matrix[i][num] = 1 * n;
            printf("%d ", matrix[i][num]);
        }
        printf("\n");
    }
}


int main() {
    int n;
    printf("please enter the number to multiply the array of ones ");
    scanf("%d", &n);
    _matrixmultipl(n);
    return 0;
}