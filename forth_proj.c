#include <stdio.h>
#include <stdlib.h>



void _sumOfNumbers() {
    int N, i, sum;
    scanf("%d", &N);
    sum = 0;
    i = 1;

    if (i<=N) {
        while (i<=N) 
        {
        sum += i;
        i++;
        }
    }
    
    printf("%d\n", sum);
}

void _factorialCalc() {
    int k, i, fact;
    i = 1;
    fact = 1; 
    scanf("%d", &k);

    if (i<=k) {
        while (i<=k) {
            fact *= i;
            i++;
            }    
        }
    
    printf("%d\n", fact);
}

void _countPositiveNumbers() {
    int count, i;
    int numbers[5]; 
    count = 0;
    for (i=0; i<5; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] > 0) {
            count++;
        }
    }
    
    printf("%d\n", count);
}

int main(void) {
    _sumOfNumbers();
    _factorialCalc();
    _countPositiveNumbers();
    return 0;
}
