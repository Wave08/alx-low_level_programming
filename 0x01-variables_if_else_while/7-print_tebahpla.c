#include <stdio.h>
/**
 * main - print if number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)

{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
