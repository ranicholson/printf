#include "holberton.h"

/**
 *
 */

int format_p_helper(unsigned long int n)
{
	int cc = 0, rem = 0;

	if (n / 16)
		cc += format_p_helper(n / 16);

	rem = n % 16;

	if (rem < 10)
	{
		_putchar(rem + '0');
		cc++;
	}
	else
	{
		_putchar(rem - 10 + 'a');
		cc++;
	}
	return (cc);
}
