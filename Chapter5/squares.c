/* squares.c -- 计算1~20的平方 */
#include <stdio.h>
int main(void)
{
    int num = 1;

    while(num++ < 22)
        printf("%4d %10d\n", num, num * num);
    return 0;
}