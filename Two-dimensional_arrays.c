//UTF-8
#include <stdio.h>

int main() {
    int table[3][4] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12}};
    int rowSum[3];
    int colSum[4];
    int total = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            rowSum[i] += table[i][j];
            colSum[j] += table[i][j];
            total = total + table[i][j];
            printf("%d\t", table[i][j]);
        }
        printf(" |%d\n", rowSum[i]);
    }
    printf("------------------------------------\n");
    
    for (int j = 0; j < 4; j++) {
        printf("%d\t", colSum[j]);
    }
    printf("| %d", total);
    return 0;
}