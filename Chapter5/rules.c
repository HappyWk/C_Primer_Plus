/* rules.c -- 优先级测试 
    write by wangkai
    20231118
*/
#include <stdio.h>
int main(void)
{
    int top, score;
    top = score = -(2 + 5) * 6 + ( 4 + 3 * (2 + 3));
    printf("top = %d, score = %d \n", top, score);
    return 0;
}