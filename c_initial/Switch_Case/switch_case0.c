#include <stdio.h>

int main(void)
{
    int grade_marks = 0;
    printf("Enter your marks: ");
    scanf("%d", &grade_marks);
    printf("Your marks are: %d\n", grade_marks);

    // case是跳转的入口，不是结束的语句，且在无break时会顺延下面的入口
    switch (grade_marks / 10)
    {
        // WARNING: 10和9的情况是一样的，但不能用||进行合并，合并后为一个逻辑运算符，即“10||9”等价1
        case 10:
        case 9:
            printf("Your grade is A\n");
            break;
        case 8:
            printf("Your grade is B\n");
            break;
        case 7:
            printf("Your grade is C\n");
            break;
        case 6:
            printf("Your grade is D\n");
            break;
        default:
            printf("准备remark吧（无慈悲）\n");
    }

    return 0;

}