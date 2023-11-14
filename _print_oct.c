#include "main.h"

/**
 *  conv_oct - convert decimal to octal.
 *
 * @n: integer to convert.
 *
 * Return: count of characters printed.
*/

int conv_oct(unsigned int n)
{
	int i, count;
	char binary[32];

	count = 0;

	while (n > 0)
	{
		binary[count++] = '0' + (n % 8);
		n /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		write(1, &binary[i], 1);
	}
	return (count);
}
