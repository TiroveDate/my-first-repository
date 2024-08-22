//UTF-8
#include <stdio.h>
#define LEN 5

int main() {
    const char triangle[LEN][LEN] = {{'E','_','_','_','_'},
{'E','E','_','_','_'},
{'E','E','E','_','_'},
{'E','E','E','E','_'},
{'E','E','E','E','E'}};
    for(int i = 0; i < 5; ++i) {
        for(int j = LEN - 1; j >= 0; --j) {
            printf("%c", triangle[i][j]);
        }
        for (int j = 0; j < 5; ++j) {
        printf("%c", triangle[i][j]);
        }
        printf("\n");
    }

    for(int i = LEN - 1; i >= 0; --i) {
        for(int j = LEN - 1; j >= 0; --j) {
            printf("%c", triangle[i][j]);
        }
        for (int j = 0; j < LEN; j++) {
            printf("%c", triangle[i][j]);
        }
        printf("\n");
    }
    return 0;
}