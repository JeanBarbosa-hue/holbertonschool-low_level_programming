#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char f;

	for (f = 122; f >= 97; f--)
	{
		putchar(f);
	}

	putchar('\n');

	return (0);
}
