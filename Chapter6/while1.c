/* while1.c -- 注意花括号（复合语句）的使用
    write by wangkai
    20231118
*/
#include <stdio.h>
int main(void)
{
    int num = 0;
    while (num < 3)
        printf("num = %d\n", num);
        num++;
    return 0;
    
}