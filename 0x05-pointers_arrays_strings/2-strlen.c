#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - length of a string.
 * @s : pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i;
i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
