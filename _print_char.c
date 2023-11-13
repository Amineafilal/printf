#include "main.h"
/**
 * print_char - write a character to the output
 * @c: input value
 * Return: return value of the character
 */
int print_char(char c)
{
	int i = 0;

	write(1, &c, 1);
	i++;
	return (i);
}
