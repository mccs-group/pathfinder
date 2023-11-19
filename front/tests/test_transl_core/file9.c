#include <stdio.h>
void f1() {
}
void f2() {
}
int main () {
	f1();
	int a[128];
	for (int i = 0; i < 128; ++i) {
		for (int j = 0; j < 64; ++j) {
			f2();
		}
	}
	for (int j = 0; j < 64; ++j ) {
		f1();
		f2();
	}
	f2();
	return 0;
}
