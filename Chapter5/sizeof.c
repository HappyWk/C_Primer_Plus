/* sizeof.c -- 使用sizeof运算符 
    write by wangkai
    20231118
*/
#include <stdio.h>
int main(void)
{
    int n = 2147483647 + 1;
    size_t intsize;

    intsize = sizeof(int);
    printf("n = %d , n hase %zd bytes;\nall ints have %zd bytes. \n", 
            n, sizeof(n), intsize);
    return 0;
}