#include <stdio.h>
#include <stdlib.h>
//straight time=40h time-and-a-half excess 40h
int main() {
	int hourOfWorks;
	float hourRate,salary;
	do {
		printf("\nEnter # of hours worked (-1 to end): ");
		scanf_s("%d", &hourOfWorks);
		if (hourOfWorks == -1) break;
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &hourRate);
		salary = hourOfWorks * hourRate;
		hourOfWorks > 40 ? salary += (hourOfWorks - 40) * hourRate * 0.5 : salary;
		printf("Salary is: $%.2f\n", salary);
	} while (hourOfWorks != -1);
	return 0;
}