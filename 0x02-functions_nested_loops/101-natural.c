#include <stdio.h>


/**
 * main -adds all multiples of 5 or 3 below 1024
 *
 * Return: 0 if succesful
 */
int main(void)
{
	int n, total = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			total = total + n;
	}

	printf("%d\n", total);

	return (0);
}
