#include <stdlib.h>
#include <stdio.h>

void _pattern() {
    int N;
    scanf("%d", &N);
    int i = 1;

    while (i <= N) {
        int j = 1;

        while (j <= i) {
            printf("*");
            j++;
        }

        printf("\n");
        i++;
    }
    while (i > 1) {
        i--;
        int j = 1;

        while (j < i) {
            printf("*");
            j++;
        }

        printf("\n");
    }
}

int main(void) {
    _pattern();
    return 0;
}