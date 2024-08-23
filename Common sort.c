#include <stdio.h>

void sort(int* arr, int len) {
    int sto;
    for(int i = 0; i < len - 1; i++) {
        for(int j = i + 1; j < len; j++) {
            if(arr[i] > arr[j]) {
                sto = arr[j];
                arr[j] = arr[i];
                arr[i] = sto;
            }
        }
    }
}

int main() {
    int arr[] = {2, 4, 5, 1, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("Before sort: ");

    for(int i = 0; i < len; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    sort(arr, len);
    printf("After  sort: ");
    for(int i = 0; i < len; i++) {
        printf("%d", arr[i]);
    }
}