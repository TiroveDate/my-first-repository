// UTF-8
#include <stdio.h>

int fac(int tmp);
void pri(int a, int b);

int main() {
    int ans;

    for(int i = 1; i < 11; i++) {
        ans = fac(i);
        pri(i, ans);    
    }
    return 0;
}

int fac(int tmp) {
    return (tmp == 0) ? 1: tmp * fac(tmp - 1);
}

void pri(int a, int b) {
    printf("%d! = %d\n", a, b);
} 