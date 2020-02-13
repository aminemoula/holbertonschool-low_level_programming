#include "holberton.h"
/**
* print_diagonal - print diagonals
* @n: number
*/
void print_diagonal(int n)
{
int a, b;

if (n > 0)
{
for (b = 1; b <= n; b++)
{
for (a = 1; b <= j; a++)
{
if (a != 1)
_putchar(' ');
if (a == b)
{
_putchar('\\');
_putchar('\n');
}
}
}
}
else
_putchar('\n');
}
