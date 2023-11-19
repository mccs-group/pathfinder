#include <stdio.h>
int main () {
	int a[128], b;
	if (b > 0) {
		b = 6;
	} else {
		b = 9;
		}
	for (int i = 0; i < 128; i++) {
		if (a[i] > 0) {
			a[i] = 6;
		} else {
			a[i] = 9;
		}
	}
	return 0;
}
