#include "holberton.h"

/**
 * format_b - prints an unsigned int in binary
 * @a: unsigned int to be printed in binary
 *
 * Return: number of characters printed
 */

int format_b(unsigned int a)
{
	int cc = 0;

	if (a > 1)
		cc += format_b(a / 2);

	_putchar((a % 2) + '0');
	cc++;

	return (cc);
}
