#include "main.h"

/**
 * conv_hexa - a function that conver decimal to
 *		hexadecimal.
 *
 * @n: integer to convert
 *
 * Return: count of characters printed.
*/

int conv_hexa(int n)
{
	int i, count, rm;
	char binary[32];

	count = 0;
	while (n > 0)
	{
		rm = n % 16;
		n /= 16;
		if (rm == 10)
			binary[count++] = 'a';
		else if (rm == 11)
			binary[count++] = 'b';
		else if (rm == 12)
			binary[count++] = 'c';
		else if (rm == 13)
			binary[count++] = 'd';
		else if (rm == 14)
			binary[count++] = 'e';
		else if (rm == 15)
			binary[count++] = 'f';
		else
			binary[count++] = '0' + (rm);
	}
	for (i = count - 1; i >= 0; i--)
		write(1, &binary[i], 1);
	return (count);
}
