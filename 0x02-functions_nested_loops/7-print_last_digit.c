#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @n : type
 * Return: value of the last digit.
 */

int print_last_digit(int n)
{
if (n >= 0)
{
_putchar(n % 10 + '0');
return (n % 10);
}
else
{
_putchar((n % 10) * -1 + '0');
return ((n % 10) * -1);
}
}