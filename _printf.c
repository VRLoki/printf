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
	sum = _parse(format);
	va_end(toprint);
	if (sum == -1)
	{
		printf("Error\n");
	}
	return(sum);
}

int	main(void)
{
	_printf("test %c yesorno\n", 'n');
	_printf("test %s yesyes\n", "nono");
	_printf("test %%");
	_printf("test %d number\n", 123454321);
	_printf("test %i number\n", 234565432);

	printf("return printf = %i\n", printf("test %s yesyes\n", "nono"));
	printf("return _printf = %i\n", _printf("test %s yesyes\n", "nono"));
	printf("return printf = %i\n", printf("test %d number\n", 123454321));
	printf("return _printf = %i\n", _printf("test %d number\n", 123454321));



	return (0);
}
