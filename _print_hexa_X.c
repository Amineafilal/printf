#include "main.h"

/**
 * conv_hexa_X - a function that conver decimal to
 *		hexadecimal.
 *
 * @n: integer to convert
 *
 * Return: count of characters printed.
*/

int conv_hexa_X(unsigned int n)
{
	int i, count, rm;
	char binary[32];

	count = 0;

	while (n > 0)
	{
		rm = n % 16;
		n /= 16;
		if (rm == 10)
			binary[count++] = 'A';
		else if (rm == 11)
			binary[count++] = 'B';
		else if (rm == 12)
			binary[count++] = 'C';
		else if (rm == 13)
			binary[count++] = 'D';
		else if (rm == 14)
			binary[count++] = 'E';
		else if (rm == 15)
			binary[count++] = 'F';
		else
			binary[count++] = '0' + (rm);

	}
	for (i = count - 1; i >= 0; i--)
	{
		write(1, &binary[i], 1);
	}
	return (count);
}
