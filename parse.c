#include "holberton.h"

int	_parse(const char *format, ...)
{
	unsigned int	i;
	unsigned int	sum;
	va_list		mylist;
	int		(*gpf)(va_list);

	i = 0;
	sum = 0;
	va_start(mylist, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			gpf =  get_print_func(format[i + 1]);
			if (gpf == NULL)
			{
				_putchar(format[i]);
				sum++;
			}
			else
			{
				sum += gpf(mylist);
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			sum++;
		}
		i++;
	}
	return (sum);
}
