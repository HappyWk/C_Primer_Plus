#include <stdio.h>

int main(void)
{
    unsigned int un = 4294967295;
    short int end = 200;
    long int big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig = %lld and not %ld and not %d\n", verybig, verybig);

    return 0;

}