/* wheat.c -- 指数增长 

    write by wangkai 
    
    20231118
*/
#include <stdio.h>
#define     SQUARES	    64
int main(void)
{
    const double CROP = 2e16;       // 世界小麦年产谷粒数目
    double current, total;
    int count = 1;

    printf("Square          grains          total       fraction of \n");
    printf("                added           grains      word total \n");
    total = current = 1.0;
    printf("%4d %20.2e %12.2e %12.2e\n", count, current, total, total / CROP);

    while (count++ < SQUARES)
    {
        current = 2.0f * current;
        total = total + current;
        printf("%4d %20.2e %12.2e %12.2e\n", count, current, total, total / CROP);
    }
    printf("That is all. \n");
    return 0;
    


    return 0;
}