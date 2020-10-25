#include "holberton.h"

int main(void)
{
	char t = 't';
	char q = '\0';
	char str[] = "Hello\n";
	char *nstr = NULL;
	char *mpt = "";
	int a = 100;
	int b = -100;
	int c = 0x09;
	int d = 010;
	int cc;

	_printf("Hello %c\n", t);
	_printf("%s", str);
	_printf("%%%s\n", "test");
	_printf("\\ \' \" \?\n");
	_printf("%d, %d, %i, %i\n", a, b, c, d);
	_printf("%s, %c, %%\n", "test", 't');
	_printf("%s\n", nstr);
	_printf("%s\n", mpt);
	_printf("%c\n", q);
	_printf("This is a test of %");
	printf("This is a test of %");
	printf("pf%\n");
	cc =_printf("%\n");
	printf("%d\n", cc);

	return (0);
}
