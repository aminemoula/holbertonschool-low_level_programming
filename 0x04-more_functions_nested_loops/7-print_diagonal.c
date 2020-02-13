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
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
if (a > 0)
{
putchar(' ');
}
}
putchar('\\');
putchar('\n');
}
}
else
{
putchar('\n');
}
}
