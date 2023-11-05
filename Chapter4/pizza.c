// pizza.c -- 在披萨饼程序中使用已定义的常量

#include <stdio.h>
#define     PI      3.14159
int main(void)
{
    float area, circum, radius;

    printf("What's the radius of your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;        // S = pi * r^2
    circum = 2.0f * PI * radius;        // L = 2 * pi * r
    printf("Your basic pizza parameters area as follows:\n");
    printf("circumference = %5.2f, area = %5.2f\n", circum, area);

    return 0;
}