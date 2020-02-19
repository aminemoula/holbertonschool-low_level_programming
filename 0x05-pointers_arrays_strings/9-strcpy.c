#include "holberton.h"
/**
 * *_strcpy - check the code for Holberton School students.
 * @dest : char
 * @src : char
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
return (dest);





}
