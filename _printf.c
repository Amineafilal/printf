#include "main.h"

int _printf(const char *format, ...)
{
	int i = 0, length;
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
		}
		format++;
	}
	va_end(args);
	return (i);
}

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
