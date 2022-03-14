#include <stdio.h>
/**
 * main - print if number is positive, zero, or negative
 * Description: using the main function
 * this program prints "Prints numbers from 0 to 90 without figure repeate
 * Return: 0
 */

int main(void)

{
	int i, j;

	i = 0;
	j = 0;

	while (i < 9)
	{
		j = i + 1;
		while (j < 10)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i < 8 || j < 9)
			{
				putchar(',');

				putchar(' ');
			}
			j++;
		}
		++i;
	}
	putchar('\n');

	 return (0);
}
