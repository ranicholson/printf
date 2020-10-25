#include "holberton.h"

/**
 * format_s - prints a string
 * @s: pointer to string to be printed
 *
 * Return: number of characters printed
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
