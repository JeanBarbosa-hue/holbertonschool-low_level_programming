#ifndef function_pointers
#define function_pointers

#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - name printing function
 *
 * @name: pointer
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}

	f(name);
}

#endif
