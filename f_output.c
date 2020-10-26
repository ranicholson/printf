#include "holberton.h"

/**
 * f_output - chooses formatting function based on specifier
 * @f: format specifier
 * @arg_list: list of arguments used to replace format specifiers in string
 *
 * Return: number of characters printed
 */

int f_output(char f, va_list *arg_list)
{
	unsigned char c;
	char *s, *r, *R;
	int cc = 0, d;
	unsigned int b;

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
		cc += format_pc();
		break;
	case 'i':
	case 'd':
		d = va_arg(arg_list, int);
		cc += format_di(d);
		break;
	case 'r':
		r = va_arg(arg_list, char *);
		cc += format_r(r);
		break;
	case 'R':
		R = va_arg(arg_list, char *);
		cc += format_R(R);
		break;
	case 'b':
		b = va_arg(arg_list, unsigned int);
		cc += format_b(b);
		break;
	default:
		cc += format_literal(f);
		break;
	}
	return (cc);
}
