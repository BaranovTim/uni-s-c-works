#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>


void _diagsum(int n, int k) {
    int N = 10;
    int sum =0;
    bool isTrue = false;
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int num = 0; num < n; num++) {
            int value = rand() % (N + 1);
            matrix[i][num] = value;
            if (value == k) {
                isTrue = true;
            }
            printf("%d ", matrix[i][num]);
        }
        printf("\n");
    }
    if (isTrue) {
        printf("Value is in the matrix");
    }
    else {
        printf("Value is NOT in the matrix");
    }
    
}

int main() {
    int n;
    int k;
    printf("Please enter the length of the square matrix ");
    scanf("%d", &n);
    printf("Please enter the number you are trying to find ");
    scanf("%d", &k);
    _diagsum(n, k);
    return 0;
}