/* t_and_f.c -- C中的真和假的值
    write by wangkai
    20231118
*/
#include <stdio.h>
int main(void)
{
    int true_val, false_val;

    true_val = (10 > 0);
    false_val = ( 10 == 0);

    int test = (true_val = 1);

    printf("%10d %10d %10d\n", true_val, false_val, test);

    return 0;
}