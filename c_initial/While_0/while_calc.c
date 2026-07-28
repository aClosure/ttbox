#include <stdio.h> 

int main(void)
{
    int num = 0;
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        while (num > 0)
        {
            num /= 10;
            n++;
        }
    }
    else
    {
        n = 1; // If the number is 0 or negative, we consider it to have 1 digit
    }
    
    printf("The number of digits is: %d\n", n);

    return 0;
}