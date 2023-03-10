#include <stdio.h>
#include <stdlib.h>

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
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	int res = a * b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", res);

	return (0);
}
