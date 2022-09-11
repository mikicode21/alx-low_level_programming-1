#include <stdio.h>
 /**
  * main - Prints numbers from 0-9 with comma and space between them
  *
  * Description: Numbers must be separated by ,, followed by a space
  * Numbers should be printed in ascending order
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
