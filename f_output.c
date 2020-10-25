#include "holberton.h"

/**
 *
 */

unsigned int f_output(char f, va_list *arg_list)
{
	va_list arg_list1;
	char c;
	char *s;
	unsigned int cc = 0;
	int d;

	va_copy(arg_list1, *arg_list);
	switch (f)
	{
	case 'c':
		c = va_arg(arg_list1, int);
		cc += format_c(c);
		break;
	case 's':
		s = va_arg(arg_list1, char *);
		cc += format_s(s);
		break;
	case '%':
		va_arg(arg_list1, int);
		cc += format_pc();
		break;
	case 'i' :
	case 'd' :
		d = va_arg(arg_list1, int);
		cc += format_di(d);
		break;
	}
	va_end(arg_list1);
	return (cc);
}
