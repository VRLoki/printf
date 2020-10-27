#include "holberton.h"


/**
 * _print_b - print a number content inside a va_list in binary
 *
 * @mylist : va_list with the number.
 * @buff : buffer
 * @bufflen : size of the buffer
 * @pp : structure with flags informations
 *
 * Return: 0
 */

int     _print_b(va_list mylist, char *buff, int *bufflen, param *pp)
{
	unsigned int	nbr;
	char		*dest;

	if (pp->lmod == 2)
		return (-1);
	nbr = va_arg(mylist, int);
	dest = _convert_base(nbr, 2, 0);
	_putstr(dest, buff, bufflen);
	free(dest);
	return (0);
}



/**
 * _print_o - print a number content inside a va_list in octal
 *
 * @mylist : va_list with the number.
 * @buff : buffer
 * @bufflen : size of the buffer
 * @pp : structure with flags informations
 *
 * Return: 0
 */

int     _print_o(va_list mylist, char *buff, int *bufflen, param *pp)
{
	unsigned long int	nbr;
	char		*dest;
	int destlen, i;
	char fill = ' ';

	nbr = va_arg(mylist, unsigned long int);
	if (pp->lmod == 0 && pp->hmod == 1)
		nbr = (unsigned short)nbr;
	else if (pp->lmod == 0)
		nbr = (unsigned int)nbr;
	dest = _convert_base(nbr, 8, 0);
	destlen = _strlen(dest);
	if (pp->zerof == 1 && pp->minusf == 0)
		fill = '0';
	if (destlen + pp->diesef < pp->widthm && pp->minusf == 0)
	{
		for (i = 0; i < pp->widthm - destlen - pp->diesef; i++)
			_putchar(fill, buff, bufflen);
	}
	if (pp->diesef == 1)
		_putchar('0', buff, bufflen);

	_putstr(dest, buff, bufflen);
	if (destlen + pp->diesef < pp->widthm && pp->minusf == 1)
	{
		for (i = 0; i < pp->widthm - destlen - pp->diesef; i++)
			_putchar(fill, buff, bufflen);
	}
	free(dest);
	return (0);
}


/**
 * _print_u - print a number content inside a va_list as unsigned int
 *
 * @mylist : va_list with the number.
 * @buff : buffer
 * @bufflen : size of the buffer
 * @pp : structure with flags informations
 *
 * Return: 0
 */

int     _print_u(va_list mylist, char *buff, int *bufflen, param *pp)
{
	unsigned long int	nbr;
	char		*dest;
	int destlen, i;
	char fill = ' ';

	nbr = va_arg(mylist, unsigned long int);
	if (pp->lmod == 0 && pp->hmod == 1)
		nbr = (unsigned short)nbr;
	else if (pp->lmod == 0)
		nbr = (unsigned int)nbr;
	dest = _convert_base(nbr, 10, 0);
	destlen = _strlen(dest);
	if (pp->zerof == 1 && pp->minusf == 0)
		fill = '0';
	if (destlen < pp->widthm && pp->minusf == 0)
	{
		for (i = 0; i < pp->widthm - destlen; i++)
			_putchar(fill, buff, bufflen);
	}
	_putstr(dest, buff, bufflen);
	if (destlen < pp->widthm && pp->minusf == 1)
	{
		for (i = 0; i < pp->widthm - destlen; i++)
			_putchar(fill, buff, bufflen);
	}
	free(dest);
	return (0);
}


/**
 * _print_x - print a number content inside a va_list in lower hexa
 *
 * @mylist : va_list with the number.
 * @buff : buffer
 * @bufflen : size of the buffer
 * @pp : structure with flags informations
 *
 * Return: 0
 */

int     _print_x(va_list mylist, char *buff, int *bufflen, param *pp)
{
	unsigned long int	nbr;
	char		*dest;
	int destlen, i;
	char fill = ' ';

	nbr = va_arg(mylist, unsigned long int);
	if (pp->lmod == 0 && pp->hmod == 1)
		nbr = (unsigned short)nbr;
	else if (pp->lmod == 0)
		nbr = (unsigned int)nbr;
	dest = _convert_base(nbr, 16, 0);
	destlen = _strlen(dest);
	if (pp->zerof == 1 && pp->minusf == 0)
		fill = '0';

	if (fill == '0' && pp->diesef == 1 && nbr != 0)
	{
		_putchar('0', buff, bufflen);
		_putchar('x', buff, bufflen);
	}
	if (destlen + pp->diesef * 2 < pp->widthm && pp->minusf == 0)
	{
		for (i = 0; i < pp->widthm - destlen - pp->diesef * 2; i++)
			_putchar(fill, buff, bufflen);
	}
	if (fill == ' ' && pp->diesef == 1 && nbr != 0)
	{
		_putchar('0', buff, bufflen);
		_putchar('x', buff, bufflen);
	}
	_putstr(dest, buff, bufflen);
	if (destlen + pp->diesef * 2 < pp->widthm && pp->minusf == 1)
	{
		for (i = 0; i < pp->widthm - destlen - pp->diesef * 2; i++)
			_putchar(fill, buff, bufflen);
	}
	free(dest);
	return (0);
}


/**
 * _print_X - print a number content inside a va_list in upper hexa
 *
 * @mylist : va_list with the number.
 * @buff : buffer
 * @bufflen : size of the buffer
 * @pp : structure with flags informations
 *
 * Return: 0
 */

int     _print_X(va_list mylist, char *buff, int *bufflen, param *pp)
{
	unsigned long int	nbr;
	char		*dest;
	int destlen, i;
	char fill = ' ';

	nbr = va_arg(mylist, unsigned long int);
	if (pp->lmod == 0 && pp->hmod == 1)
		nbr = (unsigned short)nbr;
	else if (pp->lmod == 0)
		nbr = (unsigned int)nbr;
	dest = _convert_base(nbr, 16, 1);
	destlen = _strlen(dest);
	if (pp->zerof == 1 && pp->minusf == 0)
		fill = '0';

	if (fill == '0' && pp->diesef == 1 && nbr != 0)
	{
		_putchar('0', buff, bufflen);
		_putchar('x', buff, bufflen);
	}
	if (destlen + pp->diesef * 2 < pp->widthm && pp->minusf == 0)
	{
		for (i = 0; i < pp->widthm - destlen - pp->diesef * 2; i++)
			_putchar(fill, buff, bufflen);
	}
	if (fill == ' ' && pp->diesef == 1 && nbr != 0)
	{
		_putchar('0', buff, bufflen);
		_putchar('X', buff, bufflen);
	}
	_putstr(dest, buff, bufflen);
	if (destlen + pp->diesef * 2 < pp->widthm && pp->minusf == 1)
	{
		for (i = 0; i < pp->widthm - destlen - pp->diesef * 2; i++)
			_putchar(fill, buff, bufflen);
	}
	free(dest);
	return (0);
}
