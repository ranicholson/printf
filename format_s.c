#include "holberton.h"

/**
 *
 */

void format_s(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; ++i)
		_putchar(s[i]);
}
