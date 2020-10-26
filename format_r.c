#include "holberton.h"

/**
 *
 *
 *
 */

int format_r(char *str)
{
	int x;
	int cc = 0;

	if (str == NULL)
	{
		_printf("(null)");
		return (6);
	}

	for (x = 0; str[x]; x++)
		;

	for (; str[x - 1]; x--)
	{
		_putchar(str[x - 1]);
		cc++;
	}
	return (cc);
}
