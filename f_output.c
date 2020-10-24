#include "holberton.h"

/**
 *
 */

void f_output(char f)
{
	char c, pc;
	char *s;

	switch (f)
	{
	case 'c':
		c = va_arg(arg_list, char);
		void format_c(char);
		break;
	case 's':
		s = va_arg(arg_list, char *);
		void format_s(char *);
		break;
	case '%':
		pc = va_arg(arg_list, char);
		void format_pc(char);
		break;
	}
}
