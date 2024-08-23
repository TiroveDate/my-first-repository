//UTF-8

#include <stdio.h>

int euc(int x, int y) {
    int rem;
    while(y != 0) {
        rem = x % y;
        x = y;
        y = rem;
    }
    return x;
}

int main() {
    int num1, num2;
    printf("Number1>");
    scanf("%d", &num1);
    printf("Number2>");
    scanf("%d", &num2);

    int div = euc(num1, num2);
    printf("Greatest common divisor:%d\n", div);

    int mul = num1 * num2 / div;
    printf("Least common multiple:%d", mul);
}