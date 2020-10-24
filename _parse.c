#include "holberton.h"


/**
 * _check_format - check that the format string is readable
 *
 * @format : format string
 *
 * Return: -1 if format is error, 1 if format is correct
 */

int	_check_format(const char *format)
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

/**
 * _parse - parse the fromat string and print
 *
 * @format : format string
 *
 * Return: -1 if format is error, else nb of printed char
 */



int	_parse(const char *format, ...)
{
	unsigned int	i;
	unsigned int	sum;
	va_list		mylist;
	int		(*gpf)(va_list);

	i = 0;
	sum = 0;
	va_start(mylist, format);
	if (_check_format(format) == -1)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			gpf =  _get_print_func(format[i + 1]);
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
