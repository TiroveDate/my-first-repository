#include <stdio.h>
#include <stdlib.h>

void total_even_and_count_odd(int arrays[], int num, int *sum, int *cou) {
    for (int i = 0; i < num; i++) {
        if (arrays[i] == 0) {
            printf("%d is neither even nor odd\n", arrays[i]);
        } else if (arrays[i] % 2 == 0) {
            *sum += arrays[i];
        } else {
            ++*cou;
        }
    }
}

int main(void) {
    int num;
    int total = 0, count = 0;

    printf("Enter number of arrays > ");
    if (scanf("%d", &num) != 1) {
        printf("Error : Do not enter non-interger. Exiting Program.\n");
        exit(1);
    } else if (num == 0) {
        printf("Error : Please enter number more than 0. Exiting Program.\n");
        exit(1);
    }

    int arr[num];

    for (int i = 0; i < num; i++) {
        printf("Number %2d : ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Error : Do not enter non-interger. Exiting Program.\n");
            exit(1);
        }
    }

    total_even_and_count_odd(arr, num, &total, &count);

    printf("total_even: %d\n", total);
    printf("count_odd : %d\n", count);

    return 0;
}