/* scores_in.c -- 使用循环处理数组
    write by wangkai
    2023-11-26
*/
#include <stdio.h>

#define     SIZE        3
#define     PAR         72

int main(void)
{
    int index, score[SIZE];
    int sum = 0;
    float average;

    printf("Enter %d golf scores:\n", SIZE);
    for(index = 0; index < SIZE; index++)
        scanf("%d", &score[index]);

    printf("\nThe scores read in are as follows:\n");
    for(index = 0; index < SIZE; index++)
        printf("%5d", score[index]);
    printf("\n");

    for(index = 0; index < SIZE; index++)
        sum += score[index];

    average = (float) sum / SIZE;

    printf("Sum is %d \n", sum);
    printf("That's a hand icap of %.0f\n", average - PAR);

    return 0;
}