/* sweetiel.c -- 一个计数循环
    write by wangkai
    20231118
*/
#include <stdio.h>
int main(void)
{
    const int NUMBER = 22;
    int count = 1;

    while (count <= NUMBER)
    {
        printf("Be my Valentine!    %d\n", count);
        count++;
    }
    return 0;
}