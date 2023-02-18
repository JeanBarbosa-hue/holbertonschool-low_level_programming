#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'size of various type'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int 1;
	long int 2;
	long long int 3;
	char 4;
	float 5;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(4));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(1));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(2));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(3));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(5));
	return (0);
}

