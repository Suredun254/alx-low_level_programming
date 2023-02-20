#include <stdio.h>
#include<unistd.h>
/*
 * main - is entry of my program
 * Description: prints all possinle combinations of digits
 * between 0 and 99 in ascending order
 * Return: is 0 if succesful
 */
int main(void)
{
	int a, b;
	/* 
	 * loop through a,the first digit which is the lowest,
	 * of the two digits and the highest possible is 8
	 */
	for (a = 0 ; a <= 8 ; a++)
	{
		/*
		 * loop through b, the second digit which is the higher,
		 * than a by 1 and the highest possible is 9
		 */

		for (b = a + 1 ; b <= 9 ; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');
			/*continues to put coma,space,stop if last highest combination */
			if (a == 8 && b == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
