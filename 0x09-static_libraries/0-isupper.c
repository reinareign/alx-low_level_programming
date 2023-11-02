#include "main.h"

/**
 * _isupper - uppercase letters
 * @d: to check
 * Return: 1 if uppercase letters, else return 0
 */
int _isupper(int d)
{
	if (d >= 'A' && d <= 'Z')
		return (1);
	else
		return (0);
}
