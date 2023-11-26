/* for_cube.c -- 使用for循环创建一个立方表
    write by wangkai
    20231118
*/
#include <stdio.h>
int main(void)
{
    int num;
    printf("    n   n cube\n");
    for(num = 1; num <= 10; num++)
        printf("%5d %6d\n", num, num * num * num);

    return 0;
}