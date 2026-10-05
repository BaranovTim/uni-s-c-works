#include <stdlib.h>
#include <stdio.h>

void _fibSeries() {
    int n1 = 0 ;
    int n2 = 1;
    int current;
    int next = n1 + n2;
    printf("Fibonacci Series: %d, %d, ", n1, n2);

    for (current=3; current <= 100; current++) {
        while (next <= 100) {
            printf("%d, ", next);
            n1 = n2;
            n2 = next;
            next = n1 + n2;
        }
    }
    printf("Done");
}

int main(void) {
    _fibSeries();
    return 0;
}