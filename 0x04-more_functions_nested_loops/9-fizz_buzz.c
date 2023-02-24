#include <stdio.h>

/**
 * main - Almighty Fizzbuzz, prints numbers from 1 to 100,
 *        but any numbers which is multiple of 3, print Fizz,
 *        and any numbers which is multiple of 5 print Buzz,
 *        and numbers both multiple of 3 & 5,print FizzBuzz.
 *
 * Return: 0 if true.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", num);
		}
		if (num != 100)
		{
		printf(" ");
		}
	}
	printf("\n");

	return (0);
}
