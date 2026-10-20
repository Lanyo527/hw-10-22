#include <stdio.h>
#include <stdlib.h>
int main() {
	//interest=principal*rate*days/365;
	int day;
	float principal, rate, interest;
	do {
		printf("\nEnter loan principal(-1 to end): ");
		scanf_s("%f", &principal);
		if (principal == -1) {
			exit(0);
		}
		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days:");
		scanf_s("%d", &day);
		interest = principal * rate * day / 365;
		printf("Enter interest charge is $%.2f\n", interest);
	} while (1);
	return 0;
}