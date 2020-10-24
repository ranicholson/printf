#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
void f_output(char f, va_list *arg_list);
void format_c(char);
void format_s(char *);
void format_pc(char);

#endif
