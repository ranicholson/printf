#include "holberton.h"

/**
 *
 *
 */

int format_R(char *str)
{

	int x, y, cc = 0;
	char z[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rstr = malloc(sizeof(str));

	if (str == NULL)
	{
		_printf("(null)");
		free(rstr);
		return (6);
	}

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; a[y] != '\0'; y++)
		{
			if (str[x] == a[y])
			{
				rstr[x] = z[y];
				break;
			}
			else
				rstr[x] = str[x];
		}
		_putchar(rstr[x]);
		cc++;
	}
	free(rstr);
	return (cc);
}
