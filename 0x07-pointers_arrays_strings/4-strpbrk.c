#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - main function
 * @s: Pointer to the string to search
 * @accept: Pointer to the set of bytes to find
 *
 * Description: this function search a string for any set of bytes
 * Return: A pointer to the byte of s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)

{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
