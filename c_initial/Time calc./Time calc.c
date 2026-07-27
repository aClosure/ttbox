#include<stdio.h>

int main(void)
{
    int h1,m1,s1,h2,m2,s2;

    // 优先处理时间输入，防止i值出现异常
    printf("Enter the bigger time (hours minutes seconds): ");
    scanf("%d %d %d", &h1, &m1, &s1);
    printf("Enter the smaller time (hours minutes seconds): ");
    scanf("%d %d %d", &h2, &m2, &s2);

    int ih1 = h1 - h2;
    int im1 = m1 - m2;
    int is1 = s1 - s2;


    // 判断是否存在分钟，秒相减后出现负数情况并进行处理
    if (im1 < 0 || is1 < 0)
    {
        if (is1 < 0)
        {
            is1 += 60;
            im1--;
        }
        
        if (im1 < 0)
        {
            im1 += 60;
            ih1--;
        }
        
    }
    printf("Time difference: %d hours, %d minutes, %d seconds\n", ih1, im1, is1);

    return 0;
}