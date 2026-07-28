#include <stdio.h>

int main() 
{
    int a = 0, b = 0;
    double c = 0;
    printf("Please enter two integers: a =  b =   \n");
    scanf("%d %d", &a, &b);
    c = (double)(a + b) / 2;  // 要么用double表示双精度，要么2改成2.0表示浮点数
    printf("%d 除以 %d equals to %f\n", a, b, c);

    return 0;
}