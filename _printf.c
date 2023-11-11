#include "main.h"

/**
 *  _printf - a function that produces output according to a format.
 *
 * @format: a character string.
 *
 * Return: returns number of characters printed.
*/

int _printf(const char *format, ...)
{
	int i = 0, length, value;
	char *ptr;
	char c;
	va_list args;

	va_start(args, format);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			i++;
		}
		else
		{
			format++;
			if (*format == '%')
			{
				write(1, format, 1);
				i++;
			}
			if (*format == 'c')
			{
				c = va_arg(args, int);
				write(1, &c, 1);
				i++;
			}
			if (*format == 's')
			{
				ptr = va_arg(args, char *);
				length = _strlen(ptr);
				write(1, ptr, length);
				i += length;
			}
			if (*format == 'd' || *format == 'i')
			{
				value = va_arg(args, int);
				if (value < 0)
					i++;
				print_number(value);
				i += _countDigits(value);
			}
		}
		format++;
	}
	va_end(args);
	return (i);
}

/**
 * _strlen - a function that calculate the length of a string.
 *
 * @p: the string.
 *
 * Return: returns lenght;
*/

int _strlen(char *p)
{
	int i;

	while (*p != '\0')
	{
		i++;
		p++;
	}
	return (i);
}

/**
 * print_number - a function that converts an integer to a string
 *			then it print it to standard output.
 *
 * @n: The number to print
*/

void print_number(int n)
{
	int number;
	int num = n;
	char signe;

	if (n < 0)
	{
		signe = '-';
		write(1, &signe, 1);

		num = -num;
	}
	if (num > 9)
	{
		print_number(num / 10);
	}
	number = (num % 10 + '0');
	write(1, &number, 1);
}

/**
 *  _countDigits - a function that counts number of chars in an integer.
 *
 * @value: the integer.
 *
 * Return: return the count.
*/

int _countDigits(int value)
{
	int count = 0;

	while (value != 0)
	{
		value /= 10;
		count++;
	}
	return ((count == 0) ? 1 : count);
}
