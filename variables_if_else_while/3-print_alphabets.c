#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print lowercase and the uppercase alphabet'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;
	char p;

	for (i = 'a' ; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (p = 'A' ; p <= 'Z'; p++)
	{
		putchar(p);
	}

	putchar('\n');

	return (0);

}
