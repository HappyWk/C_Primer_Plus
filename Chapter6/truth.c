/* truth.c -- 哪些值为真 -- 在C中，除零外，其余值全为真
    write by wangkai
    20231118
*/
#include <stdio.h>
int main(void)
{
    int n = 3;
    while (n)
    {
        printf("%2d is truth\n", n--);
    }
    printf("%2d is false\n", n);

    n = -3;
    while (n)
    {
        printf("%2d is truth\n", n++);
    }
    printf("%2d is false\n", n);

    return 0;
}
