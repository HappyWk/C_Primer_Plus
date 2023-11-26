/* bottles.c -- 递减运算符 
    write by wangkai
    20231118
*/
#include <stdio.h>
#define     MAX     100
int main(void)
{
    int count = MAX + 1;

    while (--count > 0)
    {
        printf("%d bottles of spring water on the wall, "
                "%d bottles of spring water!\n", count, count);
        printf("Take one down and pass it around, \n");
        printf("%d bottles of spring water!\n\n", count - 1);
    }


    int aa;
    printf("%d\n", (6 + (aa = 3 + 8)));
    printf("%d", aa);
    return 0;
}