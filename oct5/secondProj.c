#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

void _numOfDigits() {
    int N, res, counter;

    scanf("%d", &N);
    res = 0;
    counter = 1;

    if (N < 0) {
        N = abs(N);
    }

    while (N / 10 >= 1 ) {
        counter += 1;
        N /= 10;
    }
    printf("%d\n", counter);
}

int main(void) {
    _numOfDigits();
    return 0;
}