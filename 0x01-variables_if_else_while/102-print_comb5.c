#include <stdio.h>
/**
 * main - is entry of program
 *
 * Return: 0, if succesful
 */
int main(void)
{
	/**
	 * all possible combination of 2 2-digits number
	 * both seperated by space, and coma after
	 *
	int m, n;
	/*loop through highest possible of m=98,with 1 less than n*/
	for (m = 0 ; m <= 98 ; m++)
	{
		/*loop through highest of n=99,starting with 1 higherthan m*/
		for (n = m + 1 ; n <= 99 ; n++)
		{
			/*print all two digit value of both numbers*/
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar(' ');
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			/*continue to put coma & space until final combination*/
			if (m == 98 && n == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
