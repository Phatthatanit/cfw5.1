#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int x, c, b;
void numx() {
	scanf("%d", &x);
	for (c = 1; c <= x; c++) {
		for (b = x; b >= c; b--) {
			printf("%d ", b);
		}
		printf("\n");
	}

}
int main() {
	numx();
	return 0;
}