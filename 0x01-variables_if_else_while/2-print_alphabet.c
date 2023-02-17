#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the lower case of the alphabet
 *
 * Return: 0, if succesful
 */
int main(void)
{
	char lower_case;

	for (lower_case = 'a' ; lower_case <= 'z' ; lower_case++)
	{
		putchar(lower_case);
	}
	putchar('\n');
	return (0);
}
