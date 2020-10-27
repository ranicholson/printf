#include "holberton.h"

/**
 * format_S - prints a string with non-printable characters printed as "\x"
 * followed by the ASCII code value in hexadecimal
 * @s: string to be printed
 *
 * Return: number of characters printed
 */

int format_S(char *s)
{
	int i, cc = 0;

	if (s == NULL)
		return (_printf("(null)"));

	for (i = 0; s[i]; ++i)
	{
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			_putchar('\\');
			cc++;
			_putchar('x');
			cc++;
			if (s[i] > 0 && s[i] < 16)
			{
				_putchar('0');
				cc++;
			}
			cc += _printf("%X", s[i]);
		}
		else
		{
			_putchar(s[i]);
			cc++;
		}
	}
	return (cc);
}
