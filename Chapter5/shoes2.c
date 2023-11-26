/* shoes2.c -- 计算多个不同鞋码对应的脚长 */
#include <stdio.h>
#define     ADJUST	    7.31
int main(void)
{

    const double SCALE = 0.333;
    double shoe, foot;
    
    printf("Shoe size(men's)    foot length\n");
    shoe = 3.0f;
    while (shoe < 19)
    {
        foot = SCALE * shoe + ADJUST;
        printf("%10.f %15.2f inches\n", shoe++, foot);
    }
    return 0;
    
}