#include "holberton.h"

int	_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

int print_char(va_list mylist)
{
	_putchar(va_arg(mylist, int));
	return (1);
}

int print_string(va_list mylist)
{
	return (_putstr(va_arg(mylist, char *)));
}

