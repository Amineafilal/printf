#include "main.h"
/**
 * _countDigitsunsignedint - a function that counts number..
 * @value: the integer.
 * Return: return the count.
 */
int _countDigitsunsignedint(unsigned int value)
{
	int count = 0;

	while (value != 0)
	{
		value /= 10;
		count++;
	}
	return (count);
}
