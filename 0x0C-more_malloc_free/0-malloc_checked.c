#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - crete memory allocation
 * @b: int
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
