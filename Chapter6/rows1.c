/* rows1.c -- 使用嵌套循环
    write by wangkai
    2023-11-26
*/
#include <stdio.h>

#define     ROW	    6
#define     CHARS   10

int main(void)
{
    int row;
    char ch;

    for(row = 0; row < ROW; row++)
    {
        for(ch = ('A' + row); ch < ('A' + CHARS); ch++)
            printf("%c", ch);
        printf("\n");
    }

    return 0;
}