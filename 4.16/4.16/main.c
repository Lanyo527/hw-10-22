#include <stdio.h>
#include <stdlib.h>
int  main() {
	printf("\n(A)\n");
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 10;j++) {
			j <= i ? printf("*") : printf(" ");
		}
		printf("\n");
	}
	printf("\n(B)\n");
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 10;j++) {
			j < (10-i) ? printf("*") : printf(" ");
		}
		printf("\n");
	}
	printf("\n(C)\n");
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 10;j++) {
			(10 - j) <= (10 - i) ? printf("*") : printf(" ");
		}
		printf("\n");
	}
	printf("\n(D)\n");
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 10;j++) {
			(9-j) <= i ? printf("*") : printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}