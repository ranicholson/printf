#include "holberton.h"

/**
 *
 */

int format_u(unsigned int n)
{
	int cc = 0;

	if (n / 10)
		cc += format_u(n / 10);

	_putchar((n % 10) + '0');
	cc++;

	return (cc);
}
