#include <stdio.h>

int main(void)
{
    int x = 2147483647;     // x = 2^31 - 1

    unsigned int y = 4294967295;    // y = 2^32

    printf("| %d | %d | %d |\n", x, x + 1, x + 2);

    printf("| %u | %u | %u |\n", y, y + 1, y + 2);

    return 0;
}