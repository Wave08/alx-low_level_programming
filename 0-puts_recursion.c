#include "main.h"
/**
 * _puts_rcursion - prints a string, followed by a new line
 * @s: pointer to the string
 * Description: prints a string, followed by a line
 * Return: nothing
 */

void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
