#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
int _printf(const char *format, ...);
int _putchar(char c);
int f_output(char f, va_list *arg_list);
int f_output1(char f, va_list *arg_list);
int format_c(unsigned char);
int format_s(char *);
int format_pc(void);
int print_number10(int n);
int format_di(int);
int format_literal(char);
int format_r(char *str);
int format_R(char *str);
char *_strcpy(char *dest, char *src);
int format_b(unsigned int);
int format_o(unsigned int);
int format_u(unsigned int);
int format_xX(unsigned int, char);

#endif
