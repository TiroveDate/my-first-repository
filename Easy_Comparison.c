//UTF8
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Please enter three intergers\n");
    printf("1>");
    scanf("%d", &a);
    printf("2>");
    scanf("%d", &b);
    printf("3>");
    scanf("%d", &c);
    if(a == b == c) {
        printf("All three intergers are equal");
    }
    if(a == b || b == c || c == a) {
        printf("The two intergers are equal");
    }
    else {
        printf("All three intergers are different");
    }
}