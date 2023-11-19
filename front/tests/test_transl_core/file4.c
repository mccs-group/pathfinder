#include <stdio.h>

int main () {
    int A[5];
	for (int i = 0; i < 5; i++) {
        switch(A[i]) {
            case 0: A[i] = i*2; break;
            case 1: A[i] = i;   break;
        default: A[i] = 0;
        }
    }
}
