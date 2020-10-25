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
	buff[*bufflen] = c;
	*bufflen += 1;
	return (1);
}

/**
 * _print_char - print a char content inside a va_list.
 *
 * @mylist: va_list with the char.
 * @buff : buffer
 * @bufflen : size of the buffer
 *
 * Return: 1 (Always)
 */

int	_print_char(va_list mylist, char *buff, int *bufflen)
{
	_putchar(va_arg(mylist, int), buff, bufflen);
	return (1);
}


/**
 * _print_perc - print a percent character
 *
 * @mylist: va_list, not used
 * @buff : buffer
 * @bufflen : size of the buffer
 *
 * Return: 1 (Always)
 */

int	_print_perc(va_list mylist, char *buff, int *bufflen)
{
	(void)mylist;
	_putchar('%', buff, bufflen);
	return (1);
}
