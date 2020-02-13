#include "holberton.h"
/**
* print_triangle - print triangles
* @size: the size of the triangle
*
*/
void print_triangle(int size)
{
int x, y, s;

if (size <= 0)
{
_putchar('\n');
return;
}

for (x = 0; x < size; x++)
{
s = size - x;
for (y = 1; y <= size; y++)
{
if (y < s)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
