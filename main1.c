#include "holberton.h"

int main(void)
{
	char t = 't';
	char str[] = "Hello\n";
	int a = 100;
	int b = -100;
	int c = 0x09;
	int d = 010;

	_printf("Hello %c\n", t);
	_printf("%s", str);
	_printf("%%\n");
	_printf("\\ \' \" \?\n");
	_printf("%d, %d, %i, %i\n", a, b, c, d);

	return (0);
}
