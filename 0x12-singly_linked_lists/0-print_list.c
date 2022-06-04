#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - printss out all the elemnts of a list_t
 * @h: singly linked list to print
 *
 * Description: prints ("Prints all the elemets o he list"
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)

{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
