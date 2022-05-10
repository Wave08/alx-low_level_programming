#include <stdio.h>

/**
 * main - prints the name of a compilation file follwed by a new line
 * Return: 0
 */

int main(void)

{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
