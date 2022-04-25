#include "main.h"
/**
 * _strcmp - writes the character c to the stdout
 * @s1: the character to print
 * @s2: dsfsdsfdsf
 * return: On succes 1
 */
int _strcmp(char *s1, char *s2)

{
	int a = 0;

	while (s1[a] == s2[a] && s1[a] && s2[a])
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
