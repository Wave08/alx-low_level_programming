#include "main.h"
/**
 * string_toupper - string
 * @s: string
 * return: return s
 */

char *string_toupper(char *s)

{
	int i = 0;

	for (; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
