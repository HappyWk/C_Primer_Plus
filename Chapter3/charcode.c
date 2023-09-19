#include <stdio.h>

int main(void)
{
    char ch;

    printf("size of char is %d byte, as well as %d bits.\n", sizeof(char), sizeof(char) * 8);
    printf("Please enter a character.\n");
    scanf("%c", &ch);
    printf("The code for %c is %d.\t\n", ch, ch);

    return 0;
}