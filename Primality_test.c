#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void primality_test(int n) {
    if (n <= 1) {
        printf("%d is neither prime nor composite.\n", n);
    } else if (n == 2) {
        printf("%d is prime.\n", n);
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                printf("%d is not prime. It is composite.\n", n);
                return;
            }
        }
        printf("%d is prime.\n", n);
    }
}

int main(void) {
    int num = 0;
    
    printf("Enter the number > ");

    if (scanf("%d", &num) != 1) {
        printf("Detect non-integer. Program exiting.\n");
        exit(1);
    } 
    primality_test(num);
    return 0;
}