#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>


void _4x4matrix(int n) {
    bool isGood;

    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        
        for (int num = 0; num < n; num++) {
            matrix[i][num] = i+1 ;
            printf("%d ", matrix[i][num]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Please enter the length of the square matrix ");
    scanf("%d", &n);
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Incorrect number\n");
        return 1;
    }

    _4x4matrix(n);
    return 0;
}