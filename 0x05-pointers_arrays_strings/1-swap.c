#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: first integer -a swaps with b
 * @b: second integer -b swaps with a
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	a = *b;
	*b = temp;
}

