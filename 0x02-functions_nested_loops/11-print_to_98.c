#include "holberton.h"
#include <stdio.h>
/**
 * print_below_98 - check numbers
 * @a: int type
 *
 *
 * Return: return values
 */
void print_below_98(int a)
{
	int b;

	for (b = a; b <= 98; b++)
	{
		if (b != 98)
			printf("%d, ", b);
		else
			printf("%d\n", b);
	}
}

/**
 * print_above_98 - check numbers
 * @d: int type
 *
 *
 * Return: return values
 */

void print_above_98(int d)
{
	int b;

	for (b = d;  b >= 98; b--)
	{
		if (b != 98)
			printf("%d, ", b);
		else
			printf("%d\n", b);
	}
}

/**
 * print_to_98 - check numbers
 * @n: int type
 *
 *
 * Return: return values
 */


void print_to_98(int n)
{
	if (n <= 98)
		print_below_98(n);
	else
		print_above_98(n);
}
