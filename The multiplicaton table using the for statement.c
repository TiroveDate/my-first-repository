//UTF-8
#include <stdio.h>

int main() {
    int a;
    printf(" |   1   2   3   4   5   6   7   8   9\n");
    printf("--------------------------------------\n");
    for (int i = 1; i < 10; i++) {
        printf("%d|", i);
        for (int j = 1; j < 10; j++) {
            a = i * j;
            printf("%4d", a);
        }
        printf("\n");
    }
}