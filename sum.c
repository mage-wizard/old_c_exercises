#include <stdio.h>

void main(void) {
	int num = 0;
	int evenNumSum = 0;

	printf("Enter 100 any numbers: \n");

	for (int i = 0; i <= 10; ++i) {
		scanf("%d", &num);

		// Summarize only the even numbers
		if ((num % 2) == 0)
			evenNumSum += num;
	}

	printf("Sum of the even numbers is: %d \n", evenNumSum);
};