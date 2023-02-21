#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print alphabet except q and e'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char v;
	for (v = 'a'; v <= 'z'; v++)
	{
		if (v != 'e')
		{
			if (v != 'q')
			{
				putchar(v); 
			}
		}

	}

	putchar('\n');
	
	return (0);
}
