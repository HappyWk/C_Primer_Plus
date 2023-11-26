/* addemup.c -- 几种常见的语句
    write by wangkai
    20231118
*/
#include <stdio.h>
int main(void)
{
    int count, sum;     // 声明

    count = 65536;      // 表达式语句
    sum = 65537;        // 表达式语句

    while (count++ < 65542)     // 迭代语句（循环语句）
    {
        sum = sum + count;
    }
    printf("sum = %d\n", sum);      // 表达式语句（虽然它是一个函数的调用，但是确实它是一个表达式语句）

    return 0;
}