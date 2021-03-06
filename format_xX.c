#include "holberton.h"

/**
 * format_xX - prints an unsigned int in hexadecimal
 * @n: int to be printed
 * @flag: tells function whether to print in uppercase or lowercase
 *
 * Return: number of characters printed
 */

int format_xX(unsigned int n, char flag)
{
	int cc = 0, rem = 0;

	if (n / 16)
		cc += format_xX(n / 16, flag);

	rem = n % 16;

	if (rem < 10)
	{
		_putchar(rem + '0');
		cc++;
	}
	else
	{
		if (flag == 'l')
			_putchar(rem - 10 + 'a');
		else if (flag == 'u')
			_putchar(rem - 10 + 'A');
		cc++;
	}
	return (cc);
}
