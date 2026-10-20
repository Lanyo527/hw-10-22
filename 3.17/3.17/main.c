#include <stdio.h>
#include <stdlib.h>
struct User {
	int account;
	float balance;
	float charge;
	float credit;
	float creditLim;
};
int main() {
	struct User user;
	do {
		printf("\nEnter account number(-1 to end):");
		scanf_s("%d", &user.account);
		if (user.account == -1)break;
		printf("Enter beginning balance:");
		scanf_s("%f", &user.balance);
		printf("Enter total charges:");
		scanf_s("%f", &user.charge);
		printf("Enter total credits:");
		scanf_s("%f", &user.credit);
		printf("Enter credit limit:");
		scanf_s("%f", &user.creditLim);
		user.balance += user.charge - user.credit;
		if (user.balance > user.creditLim) {
			printf("Account:\t%d", user.account);
			printf("\nCredit limit:\t%.2f", user.creditLim);
			printf("\nBlance:\t\t%.2f", user.balance);
			printf("\nCredit Limit Excteded\n");
		}
	} while (1);
	return 0;
}
