#ifndef HOLB_H
#define HOLB_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

#define CASE_LIST(c) (c == 'c' || c == 's' || c == '%' || c == 'i' || c == 'd'\
		|| c == 'b' || c == 'o' || c == 'x' || c == 'X' || c == 'u'\
		|| c  == 'r' || c == 'R' || c == 'S' || c == 'p')



/**
 * struct printparam - Struct printparam
 *
 * @plusf: flag for '+' sign
 * @spacef: flag for ' ' sign
 * @diesef : flag for '#' sign
 *
 * @lmod: l modifier
 * @hmod: h modifier
 */
typedef struct printparam
{
	int plusf;
	int spacef;
	int diesef;
	int lmod;
	int hmod;
} param;


/**
 * struct printfunc - Struct printfunc
 *
 * @c: The character type
 * @f: The function associated
 */
typedef struct printfunc
{
	char c;
	int (*f)(va_list, char *, int *, param *pp);
} printfunc_t;


/* _printf.c */
int	_printf(const char *format, ...);

/* _putchar.c */
int	_putchar(char c, char *buff, int *bufflen);
int	_print_char(va_list mylist, char *buff, int *bufflen, param *pp);
int     _print_perc(va_list mylist, char *buff, int *bufflen, param *pp);
int	_print_pp(char *buff, int *bufflen, param *pp);

/* _putstr.c */
int	_putstr(char *str, char *buff, int *bufflen);
int	_print_string(va_list mylist, char *buff, int *bufflen, param *pp);
int	_print_string_r(va_list mylist, char *buff, int *bufflen, param *pp);

/* _putstr_x.c */
int     _putstr_S(char *str, char *buff, int *bufflen);
int	_print_string_R(va_list mylist, char *buff, int *bufflen, param *pp);
int	_print_string_S(va_list mylist, char *buff, int *bufflen, param *pp);
char	replace(char a);
char	*rot13(char *str);


/* _print_number.c */
int	_print_number(long int n, char *buff, int *bufflen);
int	_print_numb(va_list mylist, char *buff, int *bufflen, param *pp);

/* _getprintfunct.c */
int	(*_get_print_func(const char s))(va_list, char *, int *, param *pp);

/* _parse.c */
int	_parse(const char *format, va_list mylist);
int	_check_format(const char *format);

/* _print_base.c */
int	_print_b(va_list mylist, char *buff, int *bufflen, param *pp);
int	_print_o(va_list mylist, char *buff, int *bufflen, param *pp);
int	_print_u(va_list mylist, char *buff, int *bufflen, param *pp);
int	_print_x(va_list mylist, char *buff, int *bufflen, param *pp);
int	_print_X(va_list mylist, char *buff, int *bufflen, param *pp);

/* _convert_base.c */
size_t  _strlen(char *str);
char    *_strrev(char *str);
char	*_convert_base(unsigned long int nbr, int base, int cap);
int     _print_p(va_list mylist, char *buff, int *bufflen, param *pp);

/* _flags.c */
void	_initparam(param *pp);
int	_checkflag1(const char *format, int i, param *pp);
int	_checkmod1(const char *format, int i, param *pp);

#endif

