#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print natural numbers from num to 98
 *
 * @num: number for which the function begins
 *
 * Return: void
 *
 */

void print_to_98(int num)
{
	while (num < 98)
	{
		printf("%d", num);
		printf(",");
		printf(" ");
		num++;
	}
	while (num > 98)
	{
		printf("%d", num);
		printf(",");
		printf(" ");
		num--;
	}
	printf("98\n");
}
