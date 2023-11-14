#include "main.h"
/**
 * print_unsignedint - that converts an unsigned integer to a string.
 * @ptrunint: The number to print
 */
void print_unsignedint(char *ptrunint)
{
	int i = 0;

	while (ptrunint[i] != '\0')
	{
		write(1, &ptrunint[i], 1);
		i++;
	}
}
