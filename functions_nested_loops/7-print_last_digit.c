#include "main.h"
#include <stdio.h>

/**
 *print_last_digit - print last digit
 *
 * @p: last digit of number
 *
 *Return: x
 *
 */

int print_last_digit(int p)
{
	int x = p % 10;

	if (x < 0)
	{
		x = x * -1;
	}
	_putchar ('0' + x);
	return (x);
}
