#include "holberton.h"
/**
 * reverse_array - reverses integers.
 * @a: array
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i, t;

	i = t =  0;
	n -= 1;
	while (i <= n)
	{
		t = a[n];
		a[n--] = a[i];
		a[i++] = t;
	}
}
