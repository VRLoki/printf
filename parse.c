#include "holberton.h"

int	check_format(const char *format)
{
	unsigned int	i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && !CASE_LIST(format[i + 1]))
		{
			return (-1);
		}
		i++;
	}
	return (1);
}

int	_parse(const char *format, ...)
{
	unsigned int	i;
	unsigned int	sum;
	va_list		mylist;
	int		(*gpf)(va_list);

	i = 0;
	sum = 0;
	va_start(mylist, format);
	if (check_format(format) == -1)
	{
		return (-1);
	}
	while (format[i])
	{
		if (format[i] == '%')
		{
			gpf =  get_print_func(format[i + 1]);
			if (gpf == NULL)
			{
				_putchar(format[i]);
				if (format[i + 1] == '%')
				{
					i++;
				}	
				else
				{
					return (-1);
				}
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
