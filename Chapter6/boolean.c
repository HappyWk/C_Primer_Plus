/* boolean.c -- 使用 _Bool 类型的变量varible
    write by wangkai
    20231118
*/
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    long num;
    long sum = 0;

    bool input_is_good;

    printf("Enter an integer to be summed "
            "(q to quit)\n");
    input_is_good = (scanf("%d", &num) == 1);

    while (input_is_good)
    {
        sum = sum + num;
        printf("Enter an integer to be summed "
            "(q to quit)\n");
        input_is_good = (scanf("%d", &num) == 1);
    }
    printf("Those integers sum to %ld \n", sum);

    return 0;
    
}