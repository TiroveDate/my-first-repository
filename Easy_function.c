#include <stdio.h>

int func(int a, int b);

int main(void) {
    int a, b, c;
    printf("Please insert integers.\n");
    printf("number1:");
    scanf("%d", &a);
    printf("number2:");
    scanf("%d", &b);
    c = func(a, b);
    printf("%d * %d = %d", a, b, c);

    return 0;
}

int func(int x, int y) {
    int z;
    z = x * y;

    return z;
}