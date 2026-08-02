#include <stdio.h>

int fla(int n);
int main(void)
{
    int n = 0;
    // 先检测n值
    printf("Please enter times: ");
    // 别忘地址符！😡
    scanf("%d",&n);
    fla(n);

    return 0;
}

int fla(int n)
{
    double sum = 0.0;
    for(int i = 1; i <= n ; i++)
    {
        sum += 1.0/i;
    }

    printf("f(%d)= 1 + 1/2 + 1/3 + ... + 1/n = %lf \n",n,sum);

    return 0;
}