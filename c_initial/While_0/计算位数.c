#include <stdio.h> 

int main(void)
{
    int num = 0;
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num >= 0)
    {
        num /= 10;
        n++;
    }
    printf("The number of digits is: %d\n", n);

    return 0;
}