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
	int (*f)(va_list, char *, int *);
} printfunc_t;


/* _putchar.c */
int	_putchar(char c, char *buff, int *bufflen);
int	_print_char(va_list mylist, char *buff, int *bufflen);
int     _print_perc(va_list mylist, char *buff, int *bufflen);

/* _putstr.c */
int	_putstr(char *str, char *buff, int *bufflen);
int	_print_string(va_list mylist, char *buff, int *bufflen);

/* _print_number.c */
int	_print_number(int n, char *buff, int *bufflen);
int	_print_numb(va_list mylist, char *buff, int *bufflen);

/* _getprintfunct.c */
int	(*_get_print_func(const char s))(va_list, char *, int *);

/* _parse.c */
int	_parse(const char *format, ...);

#endif
