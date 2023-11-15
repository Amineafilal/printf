#include "main.h"
/**
 * print_i_d - write a integer to the output
 * @value: input value
 * Return: return value of the integer
 */
int print_i_d(int value)
{
	int i = 0;
	char minus = '-';

	n = value;
	if (value < 0)
	{
		write(1, &minus, 1);
		i++;
	}
	print_number(value);
	i += _countDigits(value);
	return (i);
}
