#include <stdio.h>

void first()
{
    int n;
    int m;
    int k;

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);

    if (n >= m && n >= k)
    {
        printf("The largest number is: %d\n", n);
    }
    else if (m >= n && m >= k)
    {
        printf("The largest number is: %d\n", m);
    }
    else
    {
        printf("The largest number is: %d\n", k);
    }
}

void second() {
    char character;
    scanf(" %c", &character);

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
        character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
        printf("The character is a vowel.\n");
    } else {
        printf("The character is a consonant.\n");
    }
}

void third() {
    int current_year;

    scanf("%d", &current_year);

    if (current_year % 4 == 0){
        printf("%d is a leap year.\n", current_year);
    }
    else {
        printf("%d is not a leap year.\n", current_year);
    }
}

void fourth() {
    int n;
    scanf("%d", &n);

    if (n == 0 || n == 1) {
        printf("%d is not a prime number.\n", n);
        return;
    }

    if (n == 2) {
        printf("%d is a prime number.\n", n);
        return;
    }
    if (n % 2 ==0) {
        printf("%d is not a prime number.\n", n);
        return;
    }
    for (int i =3; i*i <= n; i += 2) {
        if (n % i == 0) {
            printf("%d is not a prime number.\n", n);
            return;
        }
    }
    printf("%d is a prime number.\n", n);
}

void fifth() {
    int n1;
    int n2;
    int res;
    char str;

    scanf("%d %d", &n1, &n2);
    scanf(" %c", &str);

    if (n2 == 0 && str == '/') {
        printf("Error: Division by zero is not allowed.\n");
        return;
    }

    switch (str) {
        case '*':
            res = n1 * n2;
            break;
        case '/':
            res = n1 / n2;
            break;
        case '+':               
            res = n1 + n2;
            break;
        case '-':
            res = n1 - n2;
            break;
    }
    printf("Result: %d\n", res);
}

int main(void)
{
    first();
    second();
    third();
    fourth();
    fifth();
    return 0;
}