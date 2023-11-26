/* pound.c -- 定义一个带一个参数的函数
    write by wangkai
    20231118
*/
#include <stdio.h>
void pound(int num);        // ANSI函数原型声明
int main(void)
{
    int times = 5;
    char ch = '!';
    float fl = 6.0f;

    pound(times);
    pound(ch);
    pound(fl);

    return 0;
}

void pound(int num)
{
    while (num-- > 0)
    {
        printf("&& ");
    }
    printf("\n");
}