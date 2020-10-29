# Holberton _printf project

_printf mimics printf. _printf writes output to stdout based on a format string that contains specifiers that dictate how arguments are converted for printing.

- _printf: parses input string and calls f_output to choose which function to use for formatting based on specifiers within input string
- _putchar: writes a character to stdout
- f_output: chooses formatting function based on specifier passed from _printf
- format_R: encodes a string using ROT13 encryption and prints it
- format_S: prints a string with non-printable characters printed as "\x" followed by the ASCII code value in hexadecimal
- format_b: prints an unsigned integer in binary format
- format_c: prints a character
- format_di: calls a function to print an integer in base 10
- format_literal: prints invalid specifier literally
- format_o: prints an unsigned integer in octal format
- format_p: gets address of void pointer and calls function that prints address in hexadecimal format
- format_pc: prints a percent sign
- format_r: prints a string in reverse
- format_s: prints a string
- format_u: prints an unsigned integer in decimal format
- format_xX: prints an unsigned integer in hexadecimal format
- holberton.h: header file with "include" preprocessor directives and function prototypes
- man_3_printf: man page for _printf function

Example usage:
- To print and integer 4, then a comma, then a space, then the character "t":
```
#include "holberton.h"
int main(void)
{
	char ex = 't';
	_printf("%d, %c", 4, ex);
	return (0);
}
```