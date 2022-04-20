#include "main.h"

/**
 * print_rev - main function
 * @s: Pointer, the string to print
 *
 * Description: This pointer prints a string reverse
 *
 * Return: none
 */

void print_rev(char *s)

{
	int c;

	for (c = 0; s[c] != 0; c++)
	{
	}
	for (c = c - 1; c > 0; c--)
	_putchar(s[c]);
	_putchar('\n');
}
