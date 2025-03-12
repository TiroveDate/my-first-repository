// UTF-8
#include <stdio.h>
#include <stdlib.h>
#define N 10

void enter_num(int array[]) {
    for (int i = 0; i < N; i++) {
        printf("Enter number %d > ", i + 1);
        if (scanf("%d", &array[i]) != 1) {
            printf("Detect non-interger. Exiting program\n");
            exit(1);
        }
    }
}

void print_num(int array[]) {   // For debugging
    for (int i = 0; i < N; i++) {
        printf("%d: %d\n", i + 1, array[i]);
    }
}

int find_max(int array[], int time, int curmax) {
    if (time >= N) {
        return curmax;
    }

    if (array[time] > curmax) {
        curmax = array[time];
    }
    return find_max(array, time + 1, curmax);
}

int find_min(int array[], int time, int curmin) {
    if (time >= N) {
        return curmin;
    }

    if (array[time] < curmin) {
        curmin = array[time];
    }
    return find_min(array, time + 1, curmin);
}

int main(void) {
    int num[N];

    enter_num(num);
    printf("max:%2d min:%2d", find_max(num, 1, num[0]), find_min(num, 1, num[0]));
    return 0;
}