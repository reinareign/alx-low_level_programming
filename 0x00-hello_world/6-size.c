#include <stdio.h>
/*
 * main: Entry Point
 *
 * Description: C that prints the size of various types on the computer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of char: %lu byte(s)\n", sizeof(char));
	printf("size of int: %lu byte(s)\n", sizeof(int));
	printf("size of float: %lu byte(s)\n", sizeof(float));
	printf("size of long: %lu byte(s)\n", sizeof(long));
	printf("size of long long: %lu byte(s)\n", sizeof(long long));
	return (0);
}
