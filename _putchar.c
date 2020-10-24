#include "holberton.h"

/**
 * _putchar - print a char.
 *
 * @c: the char to print.
 *
 * Return: 1 (Always)
 */

int	_putchar(char c, char *buff, int *bufflen)
{
	/* write(1, &c, 1); */
	buff [*bufflen] = c;
	*bufflen += 1;
	return (1);
}

/**
 * _print_char - print a char content inside a va_list.
 *
 * @mylist: va_list with the char.
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
 *
 * Return: 1 (Always)
 */

int	_print_perc(va_list mylist, char *buff, int *bufflen)
{
	_putchar('%', buff, bufflen);
	return (1);
}
