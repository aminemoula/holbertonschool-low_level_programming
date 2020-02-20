#include "holberton.h"
/**
 * cap_string - turn words to capitals.
 * @s: pointer
 * Return: s
 */
char *cap_string(char *s)
{
	int i, j;
	char a[] = " \t\n,;.!?\"(){}";

	i = 1;
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= ('a' - 'A');
	while (s[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
			if (s[i - 1] == a[j] && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= ('a' - 'A');
		i++;
	}
	return (s);
}
