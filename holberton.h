#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
unsigned int f_output(char f, va_list *arg_list);
unsigned int format_c(char);
unsigned int format_s(char *);
unsigned int format_pc(void);
unsigned int print_number10(int n);
unsigned int format_di(int);

#endif
