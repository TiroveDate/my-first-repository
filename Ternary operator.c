//UTF-8

#include <stdio.h>

int main() {
    for (int i = 1; i < 101; i++) {
        printf((i % 3 == 0 && i % 5 == 0) ? "FizzBuzz\n" :
                (i % 5 == 0) ? "Buzz\n" :
                    (i % 3 == 0) ? "Fizz\n" : "%d\n", i);
    }
}


// int main() {
//     for (int i = 1; i < 101; i++) {
//         if (i % 3 == 0 && i % 5 == 0) {
//             printf("FizzBuzz\n");
//         }
//         else if (i % 5 == 0) {
//             printf("Buzz\n");
//         }
//         else if(i % 3 == 0) {
//             printf("Fizz\n");
//         }
//         else {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }