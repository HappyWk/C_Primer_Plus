/* trouble.c -- 误用 = （赋值运算符） 会导致无限循环
    write by wangkai
    20231118
*/
#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0l;
    int status;
    
    printf("Please enter an integer to be summed ", 
            "(q to quit):");
    status = scanf("%ld", &num);
    
    while (status = 1)
    {
        sum = sum + num;
        printf("enter your number\n");
        status = scanf("%ld", &num);
    }
    printf("sum is %ld \n", sum);

    // 死循环
    // while (1)
    // {
    //     printf("Hello world\n");
    // }
    
    return 0;
}