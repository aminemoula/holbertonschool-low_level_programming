#include "holberton.h"

/**
 * print_rev - print a string in reverse.
 * @s : string
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i;
while (s[i] != '\0')
{
i++;
}
i--;
while (s[i] != '\0')
{
_putchar (s[i--]);
}
_putchar ('\n');
}
