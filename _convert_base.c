#include "holberton.h"

/**
 * _strlen - return the size of a string.
 *
 * @str: the string.
 *
 * Return: the size of the string or 0.
 */

size_t	_strlen(char *str)
{
	size_t	len;

	len = 0;
	if (str != NULL)
	{
		while (*(str++))
		{
			len++;
		}
	}
	return (len);
}


/**
 * _strrev - reverse a string.
 *
 * @str: the string.
 *
 * Return: reverse string
 */

char	*_strrev(char *str)
{
	int	i;
	int	j;
	char	*dest;

	if (str == NULL)
	{
		return (NULL);
	}
	j = _strlen(str);
	dest = (char *)malloc(sizeof(char) * j + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	j--;
	i = 0;
	while (j >= 0)
	{
		dest[i] = str[j];
		i++;
		j--;
	}
	dest[i] = '\0';
	if (str[i])
	{
		free(str);
	}
	return (dest);
}



/**
 * _convert_base - convert a number into any base
 *
 * @nbr: number to be converted
 * @base: conversion base
 * @cap: boolean for hexa convert for Capital print
 *
 * Return: converted number in string
 */

char	*_convert_base(unsigned long int nbr, int base, int cap)
{
	char		b16[] = "0123456789abcdef";
	char		B16[] = "0123456789ABCDEF";
	char		*result;
	int		i;
	unsigned long int	n;
	int		count;

	if (nbr == 0)
	{
		result = (char *)malloc(sizeof(char) * 2);
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	n = nbr;
	count = 0;
	while (n > 0)
	{
		n /= base;
		count++;
	}
	result = (char *)malloc(sizeof(char) * count + 1);
	if (result == NULL)
		return (NULL);
	n = nbr;
	i = 0;
	while (n != 0)
	{
		if (cap == 1)
			result[i] = B16[n % base];
		else
			result[i] = b16[n % base];
		n /= base;
		i++;
	}
	result[i] = '\0';
	return (_strrev(result));
}





/**
 * _print_p - print a pointer address
 *
 * @mylist : va_list with the number.
 * @buff : buffer
 * @bufflen : size of the buffer
 * @pp : structure with flags informations
 *
 * Return: the number of number print.
 */

int     _print_p(va_list mylist, char *buff, int *bufflen, param *pp)
{
	unsigned long int nbr;
	char *dest;

	nbr = va_arg(mylist, unsigned long int);
	if (nbr == 0)
	{
		_putstr("(nil)", buff, bufflen);
		return (0);
	}
	dest = _convert_base(nbr, 16, 0);
	_putchar('0', buff, bufflen);
	_putchar('x', buff, bufflen);
	_putstr(dest, buff, bufflen);
	free(dest);
	return (0);
}
