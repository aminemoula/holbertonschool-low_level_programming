#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i<=10; i++)
{
_putchar(i);
}
_putchar('\n');
}
