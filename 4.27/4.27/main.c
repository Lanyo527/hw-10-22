#include <stdio.h>
#include <stdlib.h>
int main() {
	printf("side a   b   c\n");
	for (int i = 1;i <= 500;i++) {
		for (int j = 1;j <= 500;j++) {
			for (int k = 1;k <= 500;k++) {
				if (i * i + j * j == k * k) {
					printf("  %4d%4d%4d\n", i, j, k);
				}
			}
		}
	}
	return 0;
}