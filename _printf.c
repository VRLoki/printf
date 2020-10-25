#include "holberton.h"
/**
 * _printf - equivalent to printf function
 *
 * @format: format string
 *
 * Return: 0
 */
int	_printf(const char *format, ...)
{
	va_list	toprint;
	int	sum;

	sum = 0;
	va_start(toprint, format);
	/* printf("Debug\n"); */
	sum = _parse(format);
	va_end(toprint);
	if (sum == -1)
	{
		printf("Error2\n");
	}
	return (sum);
}
