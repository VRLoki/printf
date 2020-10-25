#include "holberton.h"

/**
 * replace - replace char a by rot13 transformation
 *
 * @a : replaced char
 *
 * Return: modified character if present in init[]
 * else original character
 *
 */

char replace(char a)
{
	char init[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char final[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;

	i = 0;
	while (i <= 52)
	{
		if (init[i] == a)
		{
			return (final[i]);
		}
		i++;
	}
	return (a);
}




/**
 * *rot13 - encodes a string using rot13
 *
 * @s : input string
 *
 * Return: modified string
 *
 */

char *rot13(char *str)
{
	int	i;
	char	*dest;
	size_t	len;

	if (str == NULL)
	{
		return (NULL);
	}
	dest = (char *)malloc(sizeof(char) * len);
	i = 0;
	while (str[i])
	{
		dest[i] = replace(str[i]);
		i++;
	}
	return (dest);
}


/**
 * _print_string_R - print a string content inside a va_list encoded in rot13.
 *
 * @mylist: va_list with the string.
 * @buff : buffer
 * @bufflen : size of the buffer
 *
 * Return: the number of characters print.
 */

int	_print_string_R(va_list mylist, char *buff, int *bufflen)
{
	return (_putstr(rot13(va_arg(mylist, char *)), buff, bufflen));
}






/**
 * _putstr_S - add string to buffer and return the number of characters print.
 *
 * @str: the string.
 * @buff : buffer
 * @bufflen : size of the buffer
 *
 * Return: the number of characters print.
 */

int     _putstr_S(char *str, char *buff, int *bufflen)
{
	int	i;
	int	j;

	i = 0;
	if (str == NULL)
	{
		_putstr("(null)", buff, bufflen);
	}
	else
	{
		while (str[i])
		{
			if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
			{
				_putchar('\\', buff, bufflen);
				_putchar('x', buff, bufflen);
				if (str[i] < 16)
				{
					_putchar('0', buff, bufflen);
				}
				_putstr(_convert_base(str[i], 16, 1), buff, bufflen);
			}
			else
				_putchar(str[i], buff, bufflen);
			i++;
		}
	}
	return (0);
}


/**
 * _print_string_S - print a string content inside a va_list replacing
 * non printable characters
 *
 * @mylist: va_list with the string.
 * @buff : buffer
 * @bufflen : size of the buffer
 *
 * Return: the number of characters print.
 */

int	_print_string_S(va_list mylist, char *buff, int *bufflen)
{
	return (_putstr_S(va_arg(mylist, char *), buff, bufflen));
}
