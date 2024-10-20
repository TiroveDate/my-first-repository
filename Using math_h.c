//UTF-8
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c;
    printf("Please enter the number>");
    scanf("%d", &a);
    b = a * M_PI;
    c = (a / 2.0) * (a / 2.0) * M_PI;
    printf("circumference:%d\n", b);
    printf("the area of circle:%d\n", c);
}