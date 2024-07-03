#include <stdio.h>

/**
 * main - print string in the put function
 *
 * Description: using mai function
 * this program prints programming is like building a multilingual puzzle
 * Return: 0
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", (unsigned)sizeof(c));
	printf("Size of an int: %ld bytes(s)\n", (unsigned)sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", (unsigned)sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", (unsigned)sizeof(lli));
	printf("SIze of a float: %ld byte(s)\n", (unsigned)sizeof(f));
	return (0);
}

