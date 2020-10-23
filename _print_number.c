#include "holberton.h"

/**
 * _print_number - prints the inputed number
 *
 * @n : number to print
 *
 * Return: the number of number print.
 */

int	_print_number(int n)
{
	int	k;
	int	nb;
	int	count;

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
			_putchar('-');
			_putchar('0' - nb);
			n = -(n - nb * k);
		}
		else
		{
			count++;
			_putchar('0' + nb);
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
 *
 * Return: the number of number print.
 */

int	_print_numb(va_list mylist)
{
	return (_print_number(va_arg(mylist, int)));
}

