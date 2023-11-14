#include "main.h"

/**
 * print_number - Write a function for unsigned int 
 * @numb: The number to print
 * Return: return the value of count
 */
int print_u(unsigned int numb)
{
	int i, count, len;
	char *ptrnumb;

	count = 0;
	len = _countDigitsunsignedint(numb);
	ptrnumb = (char *)malloc(len + 1);
	if (numb == 0)
	{
		write(1,"0",1);
		count++;
	}
	if (ptrnumb == NULL)
	{
		return (-1);
	}
	for (i = len - 1; i >= 0; i--)
	{
		ptrnumb[i] = numb % 10 +'0';
		numb /= 10;
		count++;
	}
	ptrnumb[len] = '\0';
	print_unsignedint(ptrnumb);
	free(ptrnumb);
	return (count);
}
