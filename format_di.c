#include "holberton.h"

/**
 * format_di - calls a function to print an int in base 10
 * @a: int to be printed
 *
 * Return: number of characters printed
 */

unsigned int format_di(int a)
{
	unsigned int cc;

	cc = print_number10(a);

	return (cc);
}
