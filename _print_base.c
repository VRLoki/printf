#include "holberton.h"


/**
 * _print_b - print a number content inside a va_list in binary
 *
 * @mylist : va_list with the number.
 * @buff : buffer
 * @bufflen : size of the buffer
 * @pp : structure with flags informations
 *
 * Return: the number of number print.
 */

int     _print_b(va_list mylist, char *buff, int *bufflen, param *pp)
{
	unsigned int	nbr;
	char		*dest;

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
 * Return: the number of number print.
 */

int     _print_o(va_list mylist, char *buff, int *bufflen, param *pp)
{
	unsigned int	nbr;
	char		*dest;

	nbr = va_arg(mylist, int);
	dest = _convert_base(nbr, 8, 0);
	_putstr(dest, buff, bufflen);
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
 * Return: the number of number print.
 */

int     _print_u(va_list mylist, char *buff, int *bufflen, param *pp)
{
	unsigned int	nbr;
	char		*dest;

	nbr = va_arg(mylist, int);
	dest = _convert_base(nbr, 10, 0);
	_putstr(dest, buff, bufflen);
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
 * Return: the number of number print.
 */

int     _print_x(va_list mylist, char *buff, int *bufflen, param *pp)
{
	unsigned int	nbr;
	char		*dest;

	nbr = va_arg(mylist, int);
	dest = _convert_base(nbr, 16, 0);
	_putstr(dest, buff, bufflen);
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
 * Return: the number of number print.
 */

int     _print_X(va_list mylist, char *buff, int *bufflen, param *pp)
{
	unsigned int	nbr;
	char		*dest;

	nbr = va_arg(mylist, int);
	dest = _convert_base(nbr, 16, 1);
	_putstr(dest, buff, bufflen);
	free(dest);
	return (0);
}
