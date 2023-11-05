/* input.c -- 何时使用& */
// by wangkai -- 231105
#include <stdio.h>
int main(void)
{
    int age;
    float assets;
    char pet[30];

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d  %f", &age, &assets);
    scanf("%s", pet);
    printf("%10d,  %10.2f,  %10s\n", age, assets, pet);

    return 0;
}