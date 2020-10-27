#include "holberton.h"

/**
 * format_R - encodes a string using ROT13 encryption and prints it
 * @str: string to be encrypted
 *
 * Return: nunber of characters printed
 */

int format_R(char *str)
{

	int x, y, cc = 0, b;
	char z[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rstr;

	if (str == NULL)
		str = "(null)";
	for (b = 0; str[b]; b++)
		;
	rstr = malloc(sizeof(char) * (b + 1));
	_strcpy(rstr, str);

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; a[y] != '\0'; y++)
		{
			if (str[x] == a[y])
			{
				rstr[x] = z[y];
				break;
			}
		}
		_putchar(rstr[x]);
		cc++;
	}
	rstr[x] = '\0';
	free(rstr);
	return (cc);
}
