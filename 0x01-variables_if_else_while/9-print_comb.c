#include <stdio.h>
 /**
  * main - prints all single combination of single digit number
  * Return: 0 always
  */
int main(void)
{
	int c;
	
	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
