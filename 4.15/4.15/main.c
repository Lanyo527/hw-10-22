#include <stdlib.h>
#include <stdio.h>
int main() {
	float money = 5000,
		interest = 0.105;
	for (int i = 0; i < 15; i++) {
		money += money * interest;
		interest += 0.005;
		printf("Year %d: $%.2f\n", i + 1, money);
	}
	return 0;
}