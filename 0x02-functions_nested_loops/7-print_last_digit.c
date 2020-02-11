#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @n : type
 * Return: Always 0.
 */
int print_last_digit(int n);
int l;
{
if (n >= 0)
{
l = n % 10;
}
else
l = (n % 10) * -1;
_putchar(l + '0');
return (l);
}