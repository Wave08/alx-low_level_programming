#include "main.h"

/**
 * swap_int - main function
 * @a: Pointer with the adress value
 * @b: Pointer with the adress value
 * Description: This function taskes a pointer to an int as parameter
 * and updates the value it points to 98
 *
 * Return: none
 */
void swap_int(int *a, int *b)

{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
