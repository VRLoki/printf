#ifndef HOLB_H
#define HOLB_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

#define CASE_LIST(c) (c == 'c' || c == 's' || c == '%' || c == 'i' || c == 'd')

/**
 * struct printfunc - Struct printfunc
 *
 * @c: The character type
 * @f: The function associated
 */
typedef struct printfunc
{
	char c;
	int (*f)(va_list);
} printfunc_t;

int	_parse(const char *format, ...);
int	(*_get_print_func(const char s))(va_list);
int	_print_char(va_list mylist);
int	_print_string(va_list mylist);
int	_putchar(char c);
int	_putstr(char *str);
int	_print_number(int n);
int	_print_numb(va_list mylist);

#endif
