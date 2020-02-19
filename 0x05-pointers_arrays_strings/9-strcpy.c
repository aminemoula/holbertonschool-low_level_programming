#include "holberton.h"
/**
 * *_strcpy - check the code for Holberton School students.
 * @dest : char
 * @src : char
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0, j;
while (src[i] != '\0')
{
i++;
}
for (j = 0; j <= i; j++)
{
dest[j] = src[j];
}
return (dest);
}
