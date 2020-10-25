#include "holberton.h"

/**
 * print_number10 - prints an integer in base 10
 * @n: integer to print
 *
 * Return: number of characters printed
 */

unsigned int print_number10(int n)
{
	unsigned int cc = 0;

	if (n / 10 == 0 && n < 0)
	{
		_putchar('-');
		cc++;
	}

	if (n / 10)
		cc += print_number10(n / 10);

	if (n % 10 < 0)
	{
		_putchar(-(n % 10) + '0');
		cc++;
	}

	else
	{
		_putchar(n % 10 + '0');
		cc++;
	}
	return (cc);
}
