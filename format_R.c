#include "holberton.h"

/**
 * format_R - encodes a string using ROT13 encryption and prints it
 * @str: string to be encrypted
 *
 * Return: nunber of characters printed
 */

int format_R(char *str)
{

	int x, y, cc = 0;
	char z[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	if (str == NULL)
		return (_printf("(null)"));

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (str[x] == a[y])
			{
				_putchar(z[y]);
				cc++;
				break;
			}
		}
		if (a[y] == '\0')
		{
			_putchar(str[x]);
			cc++;
		}
	}
	return (cc);
}
