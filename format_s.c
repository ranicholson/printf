#include "holberton.h"

/**
 * format_s - prints a string
 * @s: pointer to string to be printed
 *
 * Return: number of characters printed
 */

int format_s(char *s)
{
	int i, cc = 0;

	if (s == NULL)
	{
		_printf("(null)");
		return (6);
	}

	for (i = 0; s[i] != '\0'; ++i)
	{
		_putchar(s[i]);
		cc++;
	}
	return (cc);
}
