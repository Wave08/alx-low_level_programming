#ifndef DDL
#define DDL

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: pointer to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for alx projects
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
}dlistint_t;
#include <stdio.h>
#include <stdlib>

size_t print_dlistint(const dlistint_t *h);
