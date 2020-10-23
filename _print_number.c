#include "holberton.h"

/**
 * print_number - prints an integer.
 *
 * @n: the value of the number to print
 *
 * Return: void
 *
 */
void	print_number(int n)
{
	unsigned int	nbr;

	if (n < 0)
	{
		_putchar('-');
		nbr = -n;
	}
	else
	{
		nbr = n;
	}
	if (nbr > 9)
	{
		n = nbr / 10;
		print_number(n);
	}
	_putchar((nbr % 10) + '0');
}
