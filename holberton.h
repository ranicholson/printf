#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
int f_output(char f, va_list *arg_list);
int format_c(unsigned char);
int format_s(char *);
int format_pc(void);
int print_number10(int n);
int format_di(int);
int format_literal(char);

#endif
