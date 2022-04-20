#include "main.h"
/**
 * _strcpy - main function
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer 'src' to
 * the buffer pointed to by 'dest'
 * Rturn: Pointer to 'dest'
 */
char *_strcpy(char *dest, char *src)

{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
