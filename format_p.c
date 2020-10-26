#include "holberton.h"

/**
 *
 */

int format_p(void *p)
{
	int cc = 0;
	unsigned long int n;

	_putchar('0');
	cc++;
	_putchar('x');
	cc++;

	n = (unsigned long int)p;

	cc += format_p_helper(n);

	return (cc);

}
