#include "holberton.h"

/**
 * f_output - chooses formatting function based on specifier
 * @f: format specifier
 * @arg_list: list of arguments used to replace format specifiers in string
 *
 * Return: number of characters printed
 */

unsigned int f_output(char f, va_list *arg_list)
{
	char c;
	char *s;
	unsigned int cc = 0;
	int d;

	switch (f)
	{
	case 'c':
		c = va_arg(arg_list, int);
		cc += format_c(c);
		break;
	case 's':
		s = va_arg(arg_list, char *);
		cc += format_s(s);
		break;
	case '%':
		va_arg(arg_list, int);
		cc += format_pc();
		break;
	case 'i':
	case 'd':
		d = va_arg(arg_list, int);
		cc += format_di(d);
		break;
	}
	return (cc);
}
