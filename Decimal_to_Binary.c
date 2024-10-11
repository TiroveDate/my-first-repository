//UTF-8

#include <stdio.h>

int main() {
    int dec = 0;
    printf("Please enter an interger>");
    scanf("%d", &dec);
    int bit[256];
    int i = 0;
    while(dec > 0) {
        bit[i] = dec % 2;
        dec = dec / 2;
        i++;
    }
    printf("binary:");
    while(i > 0) {
        i--;
        printf("%d", bit[i]);
    }
    return 0;
}