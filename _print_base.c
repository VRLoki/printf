#include "holberton.h"

int     _print_b(va_list mylist, char *buff, int *bufflen)
{
	unsigned int	nbr;

	nbr = va_arg(mylist, int);
	return (_putstr(_convert_base(nbr, 2, 0), buff, bufflen));
}

int     _print_o(va_list mylist, char *buff, int *bufflen)
{
	unsigned int	nbr;

	nbr = va_arg(mylist, int);
	return (_putstr(_convert_base(nbr, 8, 0), buff, bufflen));
}

int     _print_u(va_list mylist, char *buff, int *bufflen)
{
	unsigned int	nbr;

	nbr = va_arg(mylist, int);
	return (_putstr(_convert_base(nbr, 10, 0), buff, bufflen));
}

int     _print_x(va_list mylist, char *buff, int *bufflen)
{
	unsigned int	nbr;

	nbr = va_arg(mylist, int);
	return (_putstr(_convert_base(nbr, 16, 0), buff, bufflen));
}

int     _print_X(va_list mylist, char *buff, int *bufflen)
{
	unsigned int	nbr;

	nbr = va_arg(mylist, int);
	return (_putstr(_convert_base(nbr, 16, 1), buff, bufflen));
}
