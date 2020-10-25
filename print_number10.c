#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: n is the number to print
 *
 * Return: none
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
	{
		print_number10(n / 10);
		cc++;
	}

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
