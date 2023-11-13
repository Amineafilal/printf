#include "main.h"
/**
 * print_b - Write a function convert binary
 * @n: a character string.
 * Return: returns number of binary printed.
 */
int print_b(int n)
{
	int i, count;
	char binary[32];

	count = 0;
	while (n > 0)
	{
		binary[count++] = '0' + (n % 2);
		n /= 2;
	}
	for (i = count - 1; i >= 0; i--)
	{
		write(1, &binary[i], 1);
	}
	return (count);
}
