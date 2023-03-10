#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: variable
 * @argv: pointer/array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int h;

		for (h = 0; h < argc; h++)
		{
			printf("%s\n", argv[h]);
		}

	return (0);
}
