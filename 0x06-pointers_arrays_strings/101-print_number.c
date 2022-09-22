#include "main.h"
#include "unistd.h"
/**
 * print_number - prints number
 * @n:integer to convert to character
 *
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}

	x = n;

	if (x / 10)
		print_number(x / 10);

	putchar(x % 10 + '0');
}
