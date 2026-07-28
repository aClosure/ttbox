#include <stdio.h> 

int main(void)
{
    int num = 0;
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Tip: The first "n++" is to avoid the wrong result "0" of 0.
    n++;
    // Warning: The first "num/=10" to get the correct inputed number of WHILE loop.
    num /= 10;
    while (num > 0)
    {
        num /= 10;
        n++;
    }
    printf("The number of digits is: %d\n", n);

    return 0;
}