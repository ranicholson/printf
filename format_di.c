#include "holberton.h"

/**
 * format_di - calls a function to print an int in base 10
 * @a: int to be printed
 *
 * Return: number of characters printed
 */

int format_di(int a)
{
	int cc;

	cc = print_number10(a);

	return (cc);
}

/**
 * print_number10 - prints an integer in base 10
 * @n: integer to print
 *
 * Return: number of characters printed
 */

int print_number10(int n)
{
	int cc = 0;

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
