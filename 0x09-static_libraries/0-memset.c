#include "main.h"
/**
 * _memset -used to fill a block of memory with a particular value.
 * @u: starting address of memory to be filled.
 * @c: the desired value.
 * @n: number of bytes to be changed.
 * Return: change array with new value for n bytes.
 */
char *_memset(char *u, char c, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		u[i] = c;
		n--;
	}
	return (u);
}
