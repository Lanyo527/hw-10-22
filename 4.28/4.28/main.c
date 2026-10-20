#include <stdio.h>
#include <stdlib.h>
enum Type { manager = 1, hourly, commission, piece };
int main() {
	
	enum Type type;
	float salary,work,pay;
	do {
		printf("\nEnter employee type (1 for manager, 2 for hourly, 3 for commission, 4 for piece): ");
		scanf_s("%d", &type);
		switch (type) {
		case manager:
			printf("Enter the salary: ");
			scanf_s("%f", &salary);
			printf("The salary of the manager is: %.1f\n", salary);
			break;
		case hourly:
			printf("Enter the number of hours worked: ");
			scanf_s("%f", &work);
			printf("Enter the salary: ");
			scanf_s("%f", &salary);
			pay = work * salary;
			work > 40 ? pay += (work - 40) * (salary * 0.5) : pay;
			printf("The salary of the hourly employee is: %.1f\n", pay);
			break;
		case commission:
			printf("Enter the sales amount: ");
			scanf_s("%f", &work);
			pay = 250 + work * 0.057; // Assuming 10% commission
			printf("The salary of the commission employee is: %.1f\n", pay);
			break;
		case piece:
			printf("Enter the number of pieces produced: ");
			scanf_s("%f", &work);
			printf("Enter the salary per piece: ");
			scanf_s("%f", &salary);
			pay = work * salary; // Assuming $5 per piece
			printf("The salary of the piece worker is: %.1f\n", pay);
			break;
		default:
			printf("Invalid employee type.\n");
			break;
		}
	} while (1);
	return 0;
}