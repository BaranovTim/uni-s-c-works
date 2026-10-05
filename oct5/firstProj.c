#include <stdio.h>
#include <stdlib.h>

void _sumPfSquares() {
    int N, sum;
    scanf("%d", &N);
    sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += (i * i);
    }
    printf("%d\n", sum);
}

int main(void) {
    _sumPfSquares();
    return 0;
}