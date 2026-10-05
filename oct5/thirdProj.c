#include <stdlib.h>
#include <stdio.h>

void _sumOfEvenNumbers() {
    int N, i, sum;
    scanf("%d", &N);
    sum = 0;
    
    for (i=1; i<N; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    
    printf("%d\n", sum);
}

int main(void) {
    _sumOfEvenNumbers();
    return 0;
}