Files contain C code

- holberton.h: header file with "include" preprocessor directives and function prototypes
- _printf: parses input string and calls f_output to choose which function to use for formatting based on specifiers within input string
- f_output - chooses formatting function based on specifier passed from _printf
- _putchar - writes a character to stdout
- format_c - prints a character
- format_s - prints a string
- format_pc - prints a percent sign
- format_di - calls a function to print an integer in base 10
- print_number10 - prints an integer in base 10