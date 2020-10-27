#include "holberton.h"

/**
 * _print_number - prints the inputed number
 *
 * @n : number to print
 * @buff : buffer
 * @bufflen : size of the buffer
 * @preci : required precision
 *
 * Return: the number of number print.
 */

int	_print_number(long int n, char *buff, int *bufflen, int preci)
{
	int		i, k;
	int len, precilen;
	long int	nb;
	int		count;

	k = 1;
	count = 0;
	len = 1;
	while (n / k > 9 || n / k < -9)
	{
		k *= 10;
		len++;
	}

	precilen = _numblen(n, preci);
	for (i = 0; i < precilen - len; i++)
		_putchar('0', buff, bufflen);

	while (k > 0)
	{
		nb = n / k;

		if (nb < 0)
		{
			count++;
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
 * Return: 0
 */

int	_print_numb(va_list mylist, char *buff, int *bufflen, param *pp)
{
	long int	nbr;
	int i, l, k, mod;
	char fill = ' ';

	nbr = va_arg(mylist, long int);
	if (pp->lmod == 0 && pp->hmod == 1)
		nbr = (short)nbr;
	else if (pp->lmod == 0)
		nbr = (int)nbr;

	l = _numblen(nbr, pp->precim);
	k = (nbr < 0 ? 1 : 0);
	mod = (pp->plusf || pp->spacef) && (nbr >= 0);
	if (pp->zerof && pp->minusf == 0 && pp->precim == 0)
		fill = '0';
	if (fill == '0')
		_putsign(nbr, buff, bufflen, pp);

	if (l + mod + k < pp->widthm && pp->minusf == 0)
	{
		for (i = 0; i < pp->widthm - l - mod - k; i++)
			_putchar(fill, buff, bufflen);
	}
	if (fill == ' ')
		_putsign(nbr, buff, bufflen, pp);

	_print_number(nbr, buff, bufflen, pp->precim);
	k = (nbr < 0 ? 1 : 0) && (pp->zerof == 0);
	if (l + (pp->plusf || pp->spacef) + k < pp->widthm && pp->minusf == 1)
	{
		for (i = 0; i < pp->widthm - l - (pp->plusf || pp->spacef) - k; i++)
			_putchar(fill, buff, bufflen);
	}
	return (0);
}


/**
 * _numblen - computes the length of a numver
 *
 * @nbr : input nuber
 * @preci : required precision
 *
 * Return: the number of digits
 */

int	_numblen(long int nbr, int preci)
{
	int count = 0;

	if (nbr == 0)
		return (preci > 1 ? preci : 1);
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (preci > count ? preci : count);
}




/**
 * _putsign - print an extra sign
 *
 * @nbr : number
 * @buff : buffer
 * @bufflen : size of the buffer
 * @pp : structure with flags informations
 *
 * Return: 0
 */

void _putsign(long int nbr, char *buff, int *bufflen, param *pp)
{
	if (pp->plusf == 1 && nbr >= 0)
		_putchar('+', buff, bufflen);
	else if (pp->spacef == 1 && nbr >= 0)
		_putchar(' ', buff, bufflen);
	else if (nbr < 0)
		_putchar('-', buff, bufflen);
}
