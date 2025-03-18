#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int coin = 0, time = 0;
    float pro = 100.0;
    
    do {
        time++;
        int num1 = (rand() % 9) + 1;
        int num2 = (rand() % 9) + 1;
        int num3 = (rand() % 9) + 1;
        printf("%d %d %d\n", num1, num2, num3);
        if (num1 == num2 && num2 == num3) {
            printf("Win!\n");
            coin++;
        }
    } while (coin != 1);

    printf("Probability:%.2f%%", pro / time);

    return 0;
}