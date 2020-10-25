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

int	main(void)
{
	int	nbr;

	_printf("Test1 %s\n", "Reverse1");
	_printf("Test2 %c\n", 'R');
	_printf("Test3 %i\n", 2222);
	_printf("Test4 %r\n", "TESTstring");
	_printf("Test3 %R\n", "TESTR");

	return (0);
}
