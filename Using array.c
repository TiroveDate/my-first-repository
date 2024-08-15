//UTF-8 
#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int total = 0;
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
        total += numbers[i];
    }
    printf("total:%d", total);
    return 0;
}