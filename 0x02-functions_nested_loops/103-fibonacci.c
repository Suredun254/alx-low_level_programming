#include <stdio.h>

/**
 * main - Prints the sum of even Fibonacci numbers
 * not below 4000000.
 *
 * Return: 0 is succesful
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fib_sum;
	float tot_sum;

	while (1)
	{
		fib_sum = fib1 + fib2;
		if (fib_sum > 4000000)
			break;

		if ((fib_sum % 2) == 0)
			tot_sum += fib_sum;

		fib1 = fib2;
		fib2 = fib_sum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
