#include "holberton.h"

/**
 * _putchar - add a char to the buffer.
 *
 * @c: the char to print.
 * @buff : buffer
 * @bufflen : size of the buffer
 *
 * Return: 1 (Always)
 */

int	_putchar(char c, char *buff, int *bufflen)
{
	if (*bufflen % 1024 == 0 && *bufflen != 0)
	{
		write(1, buff, 1024);
	}
	buff[*bufflen % 1024] = c;
	*bufflen += 1;
	return (1);
}

/**
 * _print_char - print a char content inside a va_list.
 *
 * @mylist: va_list with the char.
 * @buff : buffer
 * @bufflen : size of the buffer
 * @pp : structure with flags informations
 *
 * Return: 1 (Always)
 */

int	_print_char(va_list mylist, char *buff, int *bufflen, param *pp)
{
	int i;

	if (pp->minusf == 0)
	{
		for (i = 0; i < pp->widthm - 1; i++)
			_putchar(' ', buff, bufflen);
	}
	_putchar(va_arg(mylist, int), buff, bufflen);
	if (pp->minusf == 1)
	{
		for (i = 0; i < pp->widthm - 1; i++)
			_putchar(' ', buff, bufflen);
	}

	return (1);
}


/**
 * _print_perc - print a percent character
 *
 * @mylist: va_list, not used
 * @buff : buffer
 * @bufflen : size of the buffer
 * @pp : structure with flags informations
 *
 * Return: 1 (Always)
 */

int	_print_perc(va_list mylist, char *buff, int *bufflen, param *pp)
{
	if (pp->lmod == 2)
		return (-1);
	(void)mylist;
	_putchar('%', buff, bufflen);
	return (1);
}


/**
 * _strncopy - copy the n first character of a string
 *
 * @str: string to copy
 * @n : number of characters
 *
 * Return: copied string
 */

char *_strncopy(char *str, int n)
{
	int i, len, newlen;
	char *newstr;

	len = _strlen(str);
	newlen = (n < len ? n : len);
	newstr = (char *)malloc(sizeof(char) * (newlen + 1));

	for (i = 0; i < newlen; i++)
		newstr[i] = str[i];
	newstr[i] = '\0';

	return (newstr);
}
