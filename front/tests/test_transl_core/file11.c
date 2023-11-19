#include <stdio.h>

int main () {
    int a[5], b[5], c[5], d[5];
    for (int i = 1; i < 5; i++) {
        a[i] = d[i] + 5 * i;
        c[i] = a[i-1] * 2;
    }
}
