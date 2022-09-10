/*
 * *File: 0-positive_or_negative.c
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a random number and states whether
 * is possitive or negative or zero
 * Return: Always 0
 */
int main(void)
{
	int m;

	srand(time(0));
	m = rand() - RAND_MAX / 2;

	if (m > 0)
		printf("%d is positive\n", m);
	else if (m < 0)
		printf("%d is negative\n", m);
	else
		printf("%d is zero\n", m);
	return (0);
}
