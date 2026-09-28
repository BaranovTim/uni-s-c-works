#include <stdio.h>

void _example1()
{
    int n;
    scanf("%d", &n);

    int square = n * n;

    if (n>0)
    {
        printf("The number is positive\n");
        if (n % 2 == 0)
        {
            int half = n/2;
            printf("It is even; Half = %d\n", half);
        }
        else
        {
            printf("It is odd\n");
        }
    }
    else if (n<0)
    {
        printf("The number is negative\n");
    }
    else
    {
        printf("The number is zero\n");
    }

    printf("The square of the number is: %d\n", square);
}

int main(void)
{
    _example1();
    return 0;
}