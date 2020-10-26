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
		if (format[i] == '%' && format[i + 1] == '%')
			i++;
		i++;
	}
	return (1);
}

/**
 * _parse - parse the fromat string and print
 *
 * @format : format string
 * @mylist : va_list
 *
 * Return: -1 if format is error, else nb of printed char
 */



int	_parse(const char *format, va_list mylist)
{
	unsigned int	i, j;
	int		sum;
	int		(*gpf)(va_list, char *, int *);
	char		buff[1024];
	int		*bufflen;
	param pp;

	sum = 0;
	bufflen = &sum;
	i = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			_initparam(&pp);
			j = i + 1;
			while (_checkflag1(format, j, &pp))
			       j++;

			gpf =  _get_print_func(format[j]);
			if (gpf == NULL)
				_putchar(format[i], buff, bufflen);
			else
			{
				gpf(mylist, buff, bufflen);
				i = j ;
			}
		}
		else
			_putchar(format[i], buff, bufflen);
		i++;
	}
	write(1, buff, *bufflen % 1024);
	return (*bufflen);
}
