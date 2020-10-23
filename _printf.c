#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * _printf - equivalent to printf function
 * @format: format string
 *
 * Return: 0
 */
int _printf(const char *format, ...)
{
	va_list toprint;
	int (*f)(va_list);

	va_start(toprint, format);
	f = get_print_func(format);
	if (f != NULL)
		return(f(toprint));
	va_end(toprint);
	return(0);
}



int main(void)
{
	_printf("%c",'c');
	_printf("s", "holberton\n");
	printf"%%")
	printf("\n");
	return (0);
}
