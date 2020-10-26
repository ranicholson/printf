#include "holberton.h"

/**
 *
 */

int format_p(void *p)
{
	int cc = 0;
	unsigned long int n;

	n = (unsigned long int)p;

	if (n == 0)
		return (_printf("(nil)"));

	_putchar('0');
	cc++;
	_putchar('x');
	cc++;

	cc += format_p_helper(n);

	return (cc);

}
