/* divide.c -- 演示除法 */
#include <stdio.h>
int main(void)
{
    printf("integer dividion: 5/4 is %d \n", 5 / 4);
    printf("integer dividion: 6/3 is %d \n", 6 / 3);
    printf("integer dividion: 7/4 is %d \n", -7 / 4);
    printf("floating dividion: 7./4. is %1.2f \n", (float)7 / 4.);
    printf("integer dividion: 7./4 is %1.2f \n", 7. / 4);

    return 0;
}