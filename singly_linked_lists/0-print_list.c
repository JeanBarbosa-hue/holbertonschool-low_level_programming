#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all list_t elements
 *
 * @h: pointer
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str != NULL ? h->str : "(nil)");
		h = h->next;
		count++;
	}

	return (count);
}
