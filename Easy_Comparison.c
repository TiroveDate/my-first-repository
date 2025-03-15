//UTF8
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Please enter three integers\n");
    printf("1>");
    scanf("%d", &a);
    printf("2>");
    scanf("%d", &b);
    printf("3>");
    scanf("%d", &c);
    if(a == b == c) {
        printf("All three integers are equal");
    }
    if(a == b || b == c || c == a) {
        printf("The two integers are equal");
    }
    else {
        printf("All three integers are different");
    }
}