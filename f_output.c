#include "holberton.h"

/**
 *
 */

void f_output(char f, va_list *arg_list)
{
	va_list arg_list1;
	char c, pc;
	char *s;

	va_copy(arg_list1, *arg_list);
	switch (f)
	{
	case 'c':
		c = va_arg(arg_list1, int);
		format_c(c);
		break;
	case 's':
		s = va_arg(arg_list1, char *);
		format_s(s);
		break;
	case '%':
		pc = va_arg(arg_list1, int);
		format_pc(pc);
		break;
	}
	va_end(arg_list1);
}
