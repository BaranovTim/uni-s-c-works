#include <stdlib.h>
#include <stdio.h>


void _min_el() {
    int CONST = 4;
    int N = 10;
    int smallest = 100;
    
    int matrix[CONST][CONST];

    printf("Here is your matrix:");
    printf("\n");

    for (int i = 0; i < 4; i++) {
        for (int num = 0; num < CONST; num++) {
            int value = rand() % (N + 1);
            matrix[i][num] = value;
            if (matrix[i][num] < smallest) {
                smallest = matrix[i][num];
            }
            printf("%d ", matrix[i][num]);
        }
        printf("\n");
    }
    printf("\nSmallest element: %d\n", smallest);

}

int main() {
    _min_el();
    return 0;
}