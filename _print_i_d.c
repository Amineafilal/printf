#include "main.h"
/**
 * print_i_d - write a integer to the output
 * @value: input value
 * Return: return value of the integer
 */
int print_i_d(int value)
{
	int i = 0;

	if (value == INT_MIN)
	{
		return (value);
	}
	if (value < 0)
	{
		i++;
	}
	print_number(value);
	i += _countDigits(value);
	return (i);
}
