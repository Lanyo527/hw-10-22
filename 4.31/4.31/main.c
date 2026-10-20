#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	for (int i = 0;i < 9;i++) {
		for (int j = 0;j < 9;j++) {
			if ((abs(j-4) <= i)&&(abs(j-4) <= 8-i)) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}