#include "holberton.h"

/**
 * _printf - uses format specifier to pick function
 *
 */

int _printf(const char *format, ...)
{
	va_list arg_list;
	unsigned int i = 0, len = 0;

	va_start(arg_list, format);

	while (format[len])
		++len;

	for (i = 0; i < len; ++i)
	{
		if (format[i] == '%')
		{
			f_output(format[i + 1], &arg_list);
			i++;
		}
		else
			_putchar(format[i]);
	}
	va_end(arg_list);
	return (0);
}
