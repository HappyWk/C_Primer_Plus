/* sweetie2.c -- 使用for循环的计数循环
    write by wangkai
    20231118
*/
#include <stdio.h>
int main(void)
{
    const int NUMBER = 22;
    int count = 1;

    for(count = 1; count <= NUMBER; count++)
        printf("Be my Valentine!    %d\n", count);
        
    return 0;
}