#include "holberton.h"

/**
 * _printf - parses input string and calls f_output to choose which function
 * to use for formatting based on specifiers
 * @format: pointer to string containing specifiers
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list arg_list;
	unsigned int i = 0, len = 0, cc = 0;

	va_start(arg_list, format);

	while (format[len])
		++len;

	for (i = 0; i < len; ++i)
	{
		if (format[i] == '%')
		{
			cc += f_output(format[i + 1], &arg_list);
			i++;
		}
		else
		{
			_putchar(format[i]);
			cc++;
		}
	}
	va_end(arg_list);
	return (cc);
}
