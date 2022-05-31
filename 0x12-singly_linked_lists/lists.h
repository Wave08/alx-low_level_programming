#ifndef LIST_H
#define LIST_H

#include <stddef.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc 'ed string)
 * @len: length of the striing
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for ALX project
 */
typrdef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_s;

size_t print_list(const list_t *h);
