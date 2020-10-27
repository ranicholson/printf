#include "holberton.h"

/**
 * format_o - prints an unsigned int in octal
 * @n: int to be printed
 *
 * Return: number of characters printed
 */

int format_o(unsigned int n)
{
	int cc = 0;

	if (n / 8)
		cc += format_o(n / 8);

	_putchar((n % 8) + '0');
	cc++;

	return (cc);
}
