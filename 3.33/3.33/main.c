#include <stdio.h>
#include <stdlib.h>
int main() {
	int l, w;
	printf("Enter length and width(l w): ");
	scanf_s("%d %d", &l, &w);
	for (int i = 0;i < l;i++) {
		for (int j = 0;j < w;j++) {
			if (i == 0 || i == l - 1 || j == 0 || j == w - 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
		
	}
	return 0;
}