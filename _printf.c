#include "holberton.h"

/**
 * _printf - equivalent to printf function
 * @format: format string
 *
 * Return: 0
 */
int	_printf(const char *format, ...)
{
	va_list		toprint;
	unsigned int	sum;

	sum = 0;
	va_start(toprint, format);
	sum = _parse(format);
	va_end(toprint);
	return(sum);
}



int main(void)
{
	int	i;

	_printf("je suis un caractere et je vaux '%c' et '%c' voila\n",'m', 'g');
	_printf("pour test on peut \"%s\" <-- \n", "holberton");
	printf("%i\n", _printf("%s%c", "res", '\n'));
	return (0);
}
