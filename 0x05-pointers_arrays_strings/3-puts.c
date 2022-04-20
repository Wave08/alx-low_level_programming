#include "main.h"

/**
 * _puts - main funvtion
 * @str: Pointer with adress value
 * Description: This function takes a pointer to an int as parameter
 * and updates the value it points to 98
 *
 * Return: none
 */
void _puts(char *str)

{
	int c;

	for (c = 0; str[c] != 0; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
