#include "holberton.h"

/**
 * _print_number - prints the inputed number
 *
 * @n : number to print
 * @buff : buffer
 * @bufflen : size of the buffer
 *
 * Return: the number of number print.
 */

int	_print_number(long int n, char *buff, int *bufflen)
{
	int		k;
	long int	nb;
	int		count;

	k = 1;
	count = 0;
	while (n / k > 9 || n / k < -9)
		k *= 10;

	while (k > 0)
	{
		nb = n / k;

		if (nb < 0)
		{
			count++;
			count++;
			_putchar('-', buff, bufflen);
			_putchar('0' - nb, buff, bufflen);
			n = -(n - nb * k);
		}
		else
		{
			count++;
			_putchar('0' + nb, buff, bufflen);
			n = n - nb * k;
		}
		k = k / 10;
	}
	return (count);
}

/**
 * _print_numb - print a number content inside a va_list.
 *
 * @mylist : va_list with the number.
 * @buff : buffer
 * @bufflen : size of the buffer
 * @pp : structure with flags informations
 *
 * Return: the number of number print.
 */

int	_print_numb(va_list mylist, char *buff, int *bufflen, param *pp)
{	
	long int	nbr;
	
	if (pp->plusf == 1 && nbr > 0)
	{
		_putchar('+', buff, bufflen);
	}
	else if (pp->spacef == 1 && nbr > 0)
	{
		_putchar(' ', buff, bufflen);
	}
	if (pp->lmod == 1)
	{
		nbr = va_arg(mylist, long int);
	}
	else if (pp->hmod == 1)
	{
		nbr = va_arg(mylist, int);
		return (_print_number((short)nbr, buff, bufflen));
	}
	else
	{
		nbr = va_arg(mylist, int);
	}
	return (_print_number(nbr, buff, bufflen));
}
