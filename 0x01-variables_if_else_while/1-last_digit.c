/*
 * File: 1-last digit.c
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0
 *
 * Return: 0 (success)
 */

int main(void)
{
	int m;

	srand(time(0));
	m = rand() -RAND_MAX / 2;

		if ((m % 10) > 5)
		{
			printf("last digit of %d is %d and is greater than 5\n", m, m % 10);
		}
		else if ((m % 10) < 6 && (m % 10) !=0)
		{
			printf("last digit of %d is %d and is less than 6 and not 0\n", m, m% 10);
		}
		else
		{
			printf("last digit of %d is %d and is 0\n", m , m % 10);
		}
	return (0);
}
