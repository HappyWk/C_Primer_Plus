/* summing.c -- 根据用户键入的整数求和
    write by wangkai
    20231118
*/
#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0l;
    
    printf("Please enter an integer to be summed ", 
            "(q to quit):");
    
    while (scanf("%ld", &num))
    {
        sum = sum + num;
    }
    printf("sum is %ld \n", sum);

    // 死循环
    // while (1)
    // {
    //     printf("Hello world\n");
    // }
    
    return 0;
}