// UTF-8

#include <stdio.h>
#include <math.h>

int squ(int tmp);

int main(void) {
    int num;
    int ans;

    printf("Please enter the number:");
    scanf("%d", &num);

    ans = squ(num);

    printf("The square of this number is %d.", ans);

    return 0;
}

int squ(int tmp) {
    int res;

    res = tmp * tmp;

    return res;
}