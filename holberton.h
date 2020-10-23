#ifndef HOLB_H
#define HOLB_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

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
int	(*get_print_func(const char s))(va_list);
int	print_char(va_list mylist);
int	print_string(va_list mylist);
int	_putchar(char c);
int	_putstr(char *str);

#endif
