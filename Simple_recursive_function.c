#include <stdio.h>

int factorial(int n);

int main(void) {
    int num, tmp;

    printf("Please insert numbers:");
    scanf("%d", &num);

    tmp = factorial(num);

    printf("%d: factorial is %d", num, tmp);
    
    return 0;
}

int factorial(int n) {
    int fac;
    if (n > 0) {
        fac = n * factorial(n - 1);
    } else {
        fac = 1;
    }

    return fac;
}