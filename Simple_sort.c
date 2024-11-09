#include <stdio.h>
#define NUMBER 5

int sort(int n[]);

int main(void) {
    int num[NUMBER];

    printf("Please insert 5 number.\n");
    
    for(int i = 0; i < NUMBER; i++) {
        printf("number%d:", i + 1);
        scanf("%d", &num[i]);
    }

    printf("Before sort:");

    for(int i = 0; i < NUMBER; i++) {
        printf("%d, ", num[i]);
    }

    printf("\n");

    sort(num);

    printf("After  sort:");

    for(int i = 0; i < NUMBER; i++) {
        printf("%d, ", num[i]);
    }

    return 0;
}

int sort(int n[]) {
    int tmp;
    for(int i = 0; i < NUMBER; i++) {
        for(int j = i + 1; j < NUMBER; j++) {
            if(n[i] < n[j]) {
                tmp = n[i];
                n[i] = n[j];
                n[j] = tmp;
            }
        }
    }
}