/* entry.c -- 出口条件循环
    write by wangkai
    2023-11-26
*/
#include <stdio.h>
int main(void)
{
    const int secret_code = 23;
    int code_entered;

    printf("Enter secert\n");
    scanf("%d", &code_entered);
    while (code_entered != secret_code)
    {
        printf("Enter secert\n");
        scanf("%d", &code_entered);
    }
    printf("Congratulations! You are cured!\n");

    return 0;
    
}