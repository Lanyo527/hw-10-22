#include <stdio.h>
#include<stdlib.h>
int main() {
	float sales,salary;
	//salary=200+0.09*sales;
	do {
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f", &sales);
		if (sales == -1)break;
		salary = 200 + 0.09 * sales;
		printf("Salary is: $%.2f\n", salary);
	} while (sales != -1);
	return 0;
}