// define.c -- 使用limit.h和float头文件中定义的明示常量
#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("const of INT_MAX is: %d\n", INT_MAX);

    printf("const of INT_MIN is:%d\n", INT_MIN);

    printf("number byte of char is:%d\n", CHAR_BIT);

    printf("max value of char %d | min value of char %d\n",
        CHAR_MAX, CHAR_MIN);

    return 0 ;
}