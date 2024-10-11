//UTF-8
#include <stdio.h>

int main() {
    int a;
    int Sum;
    int time = 0;
    do {
        time++;
        printf("interger%d>", time);
        scanf("%d", &a);
        Sum = Sum + a;
    } while (a != 0);
    time--;
    if (time != 0) {
        printf("Sum:%d\n", Sum);
        printf("Average:%.2f", (float)Sum / time);
    }
    return 0;
}
