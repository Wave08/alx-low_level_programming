#include "main.h"
/**
 * _strncat - function
 * @dest: Destiny
 * @src: Source
 * @n: Variable
 * Return: Destiny
 */

char *_strncat(char *dest, char *src, int n)

{
	int i = 0;
	int r = 0;
	int tam = 0;

	for (; dest[tam];)
	{
		tam++;
	}

	while (r < n && src[r])
	{
		dest[tam + i] = src[r];
		i++;
		r++;
	}
	return (dest);
}
