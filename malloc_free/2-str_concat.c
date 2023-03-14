#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate strings
 *
 * @s1: pointer
 * @s2: pointer
 *
 * Return: conc
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int len1, len2;

	if (s1 == NULL)
		return ("");

	if (s2 == NULL)
		return ("");

	len1 = strlen(s1);
	len2 = strlen(s2);

	conc = malloc(len1 + len2 + 1);

	if (conc == NULL)
		return (NULL);

	strcpy(conc, s1);
	strcat(conc, s2);

		return (conc);
}
