#include <stdlib.h>
#include <stdio.h>
#include<stdbool.h>

void _sumOfPrimeNums() {
    int n;
    int i;
    int sum = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        
        bool isPrime = true;
        
        if (i == 0 || i == 1) {
            isPrime = false;
            
        }

        if (i == 2) {
            printf("%d is a prime number.\n", i);
            sum += i;
        }
        if (i % 2 ==0) {
            isPrime = false;
        }
        for (int j = 3; j*j <= i; j += 2) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            printf("%d is a prime number.\n", i);
            sum += i;
        }
    }
    printf("%d\n", sum);
}

int main(void) {
    _sumOfPrimeNums();
    return 0;
}