#include "main.h"

/**
 *
 *
 *
 *
 */

void puts_half(char *str)
{
	int o; 

		for (o = 0; str[o] != '\0'; o++)
		{
			if (o > str[o])
				putchar( 
