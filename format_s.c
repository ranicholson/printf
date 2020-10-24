#include "holberton.h"

/**
 *
 */

unsigned int format_s(char *s)
{
	unsigned int i, cc = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		_putchar(s[i]);
		cc++;
	}
	return (cc);
}
