/*
 * Author: Kot Aleksey
 * Group: 12a
 * Description: Lucky six-digit numbers (variant 10)
 *              A number is lucky if sum of first three digits equals sum of last three.
 */

#include <stdio.h>

// Function to check if a six-digit number is lucky
int is_lucky(int num) {
		int first_sum = 0, last_sum = 0;
		int i;

		// Extract digits: num is between 100000 and 999999
		// Last three digits
		for (i = 0; i < 3; i++) {
				last_sum += num % 10;
				num /= 10;
		}
		// First three digits
		for (i = 0; i < 3; i++) {
				first_sum += num % 10;
				num /= 10;
		}

		return (first_sum == last_sum);
}

int main() {
		int count = 0;
		int number;

		printf("Lucky six-digit numbers:\n");
		for (number = 100000; number <= 999999; number++) {
				if (is_lucky(number)) {
						printf("%06d\n", number);
						count++;
				}
		}

		printf("\nTotal lucky numbers: %d\n", count);
		return 0;
}