#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	int x, y;
	unsigned int ui;
	void *addr;
	char *nstr = NULL;
<<<<<<< HEAD
	char *estr = "";

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	x = _printf("Length:[%d, %i]\n", len, len);
	y = printf("Length:[%d, %i]\n", len2, len2);
	printf("_printf %d || printf %d\n", x, y);
	x = _printf("Negative:[%d]\n", -762534);
	y = printf("Negative:[%d]\n", -762534);
	printf("_printf %d || printf %d\n", x, y); 
	x = _printf("Unsigned:[%u]\n", ui);
	y = printf("Unsigned:[%u]\n", ui);
	printf("_printf %d || printf %d\n", x, y); 
	x = _printf("Unsigned octal:[%o]\n", ui);
	y = printf("Unsigned octal:[%o]\n", ui);
	printf("_printf %d || printf %d\n", x, y); 
	x = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	y = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("_printf %d || printf %d\n", x, y); 
	x = _printf("Character:[%c]\n", 'H');
	y = printf("Character:[%c]\n", 'H');
	printf("_printf %d || printf %d\n", x, y); 
	x = _printf("String:[%s]\n", "I am a string !");
	y = printf("String:[%s]\n", "I am a string !");
	printf("_printf %d || printf %d\n", x, y); 
	x = _printf("Address:[%p]\n", addr);
	y = printf("Address:[%p]\n", addr);
	printf("_printf %d || printf %d\n", x, y); 
	x = len = _printf("Percent:[%%]\n");
	y = len2 = printf("Percent:[%%]\n");
	printf("_printf %d || printf %d\n", x, y); 
	x = _printf("Len:[%d]\n", len);
	y = printf("Len:[%d]\n", len2);
	printf("_printf %d || printf %d\n", x, y);
	x = _printf("%s\n", nstr);
	y = printf("%s\n", nstr);
	printf("_printf %d || printf %d\n", x, y); 
	x = _printf("%s\n", estr);
	y = printf("%s\n", estr);
	printf("_printf %d || printf %d\n", x, y);
	x = _printf("/%\n");
	y = printf("/%\n");
	printf("_printf %d || printf %d\n", x, y); 
=======
	char *mpt = "";
	int a = 100;
	int b = -100;
	int c = 0x09;
	int d = 010;
	int cc, dd;

	_printf("Hello %c\n", t);
	_printf("%s", str);
	_printf("%%%s\n", "test");
	_printf("\\ \' \" \?\n");
	_printf("%d, %d, %i, %i\n", a, b, c, d);
	_printf("%s, %c, %%\n", "test", 't');
	_printf("%s\n", nstr);
	_printf("%s\n", mpt);
	_printf("%c\n", q);
	_printf("foo %d bar %", 1);
	printf("\n");
	printf("foo %d bar %", 1);
	printf("\n");
	printf("pf%\n");
	cc =_printf("%\n");
	printf("%d\n", cc);
	printf("test2\n");
	cc = printf("%                        v\n");
	dd = _printf("%                        v\n");
	printf("real: %d\n", cc);
	printf("ours: %d\n", dd);
>>>>>>> b375cd13ebc28f32818e486c6ac32015b2a5ed4c

	return (0);
}
