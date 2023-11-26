/* while2.c -- while语句本身也是一条单独语句，注意分号位置
    write by wangkai
    20231118
*/
#include <stdio.h>
int main(void)
{
    int n = 0;
    while (n++ < 10);
        printf("n is %d\n", n);
    printf("That is all this program does.\n");

    return 0;
    
}