#include <stdio.h>
#define N 100

int main() {
    for (int i = 1; i <= N; i++) {
        i % 15 == 0 ? printf("FizzBuzz\n") : i % 3 == 0 ? printf("Fizz\n") : i % 5 == 0 ? printf("Buzz\n") : printf("%d\n", i); 
    }
    return 0;
}