#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int _strspn(char *s, char *accept);
	unsigned int d = 0;
	int d;

	while (*s)
	{
	for (d = 0; accept[d]; d++)
	{
	if (*s == accept[d])
	{
	d++;
	break;
	}
	else if (accept[d + 1] == '\0')
	return (d);
	}
	s++;
	}
	return (d);
}
