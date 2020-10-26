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

	return (0);
}
