#include<stdio.h>

int x = 0;

int main(void)
{
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &x);
    int i = 0;
    int isPrime = 1; // Assume the number is prime

    for ( i = 2; i<x ; i++ )
    {
        if (x%i == 0)
        {
            isPrime = 0; // Not prime
            break;
        }
    }
    if (isPrime == 1)
    {
        printf("%d is a prime number.\n", x);
    }
    else
    {
        printf("%d is not a prime number.\n", x);
    }

    return 0;
}