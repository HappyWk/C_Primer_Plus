/* power.c -- 计算数的整数幂
    write by wangkai
    2023-11-26
*/
#include <stdio.h>

double power(double n, int p);

int main(void)
{
    double xx, xx_power;
    int exp;

    printf("Enter a number and the positive integer power");
    printf("Enter q to quit\n");

    while (scanf("%lf  %d", &xx, &exp) == 2)
    {
        xx_power = power(xx, exp);
        printf("%.3g to the power %d is %.5g\n", xx, exp, xx_power);
        printf("Enter q to quit\n");
    }
    return 0;
    
}

double power(double n, int p)
{
    double power = 1;
    for(int kk = 0; kk < p; kk++)
        power *= n;

    return power;
}