#include "main.h"
/**
 * _memset - main function
 * @s: pointer to the buffer
 * @b: the constant byte
 * @n: size of buffer to fill
 *
 * Description: this function fills memory with a constant byte
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (0);
}
