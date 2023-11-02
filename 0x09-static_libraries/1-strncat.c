#include "main.h"

/**
 * _strncat - function concatenate two strings
 * using at most n bytes from src
 * @dest value entered
 * @src: value entered
 * @n: value entered
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int d;

	i = 0;
	while (dest[i] != '\0')
	{
		a++;
	}

	d = 0;
	while (d < n && src[b] != '\0')
	{
		dest[i] = src[d];
		i++;
		d++;
	}
	dest[i] = '\0';
	return (dest);
}
