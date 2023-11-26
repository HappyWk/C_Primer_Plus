/* when.c -- 何时退出循环
    write by wangkai
    20231118
*/
#include <stdio.h>
int main(void)
{
    int num = 2;
    while (num < 7)
    {
        printf("num = %d \n", num++);
        printf("Now num = %d\n", num);
    }
    printf("Loop Finished!\n");
    return 0;
}