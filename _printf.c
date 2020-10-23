#include "holberton.h"

/**
 * _printf - equivalent to printf function
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
	sum = _parse(format);
	va_end(toprint);
	if (sum == -1)
	{
		_putstr("Error\n");
	}
	return(sum);
}



int main(void)
{
	int	i;

	_printf("le char = '%%s'\n","s peut etre ?");
	printf("le char du vrai = '%%%c'\n", 'g');
	return (0);
}
