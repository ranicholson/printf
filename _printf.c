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
	unsigned int i = 0, len = 0;
	int cc = 0, ret = 0;

	if (!format)
		return (-1);

	va_start(arg_list, format);
	while (format[len])
		++len;

	for (i = 0; i < len; ++i)
	{
		if (format[i] == '%')
		{
			ret = f_output(format[i + 1], &arg_list);
			if (ret < 0)
			{
				_putchar('%');
				if (format[i + 1] != '\0')
					_putchar(format[i + 1]);
			}
			cc += ret;
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
