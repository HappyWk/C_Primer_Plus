#include <stdio.h>
int main(void)
{

    float num = 2e30;

    printf("| num = %f |\n", num);
    printf("| float is %d bytes, that are %d bits. |\n", sizeof(float), sizeof(float) * 8);

    printf("| int is %d bytes, that are %d bits. |\n", sizeof(int), sizeof(int) * 8);

    return 0;
}