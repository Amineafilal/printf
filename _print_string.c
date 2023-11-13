#include "main.h"
/**
 * print_string - write a string to the output
 * @ptr: input value
 * Return: return value of the string
 */
int print_string(char *ptr)
{
	int count = 0, i;


	for (i = 0; ptr[i] != '\0'; i++)
	{
		write(1, &ptr[i], 1);
		count += 1;
	}
	return (count);
}
