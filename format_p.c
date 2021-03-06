#include "holberton.h"

/**
 * format_p - gets address of void pointer and calls function that prints
 * address in hexadecimal
 * @p: void pointer whose address will be printed
 *
 * Return: number of characters printed
 */

int format_p(void *p)
{
	int cc = 0;
	unsigned long int n;

	n = (unsigned long int)p;

	if (n == 0)
		return (_printf("(nil)"));

	_putchar('0');
	cc++;
	_putchar('x');
	cc++;

	cc += format_p_helper(n);

	return (cc);

}

/**
 * format_p_helper - prints address of void pointer in hexadecimal
 * @n: address of void pointer
 *
 * Return: number of characters printed
 */

int format_p_helper(unsigned long int n)
{
	int cc = 0, rem = 0;

	if (n / 16)
		cc += format_p_helper(n / 16);

	rem = n % 16;

	if (rem < 10)
	{
		_putchar(rem + '0');
		cc++;
	}
	else
	{
		_putchar(rem - 10 + 'a');
		cc++;
	}
	return (cc);
}
