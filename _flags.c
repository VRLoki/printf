#include "holberton.h"
/**
 * _initparam - put the parameters to 0
 *
 * @pp: print parameters structure
 *
 * Return: Void
 */

void _initparam(param *pp)
{
	pp->plusf = 0;
	pp->spacef = 0;
	pp->diesef = 0;
	pp->minusf = 0;
	pp->zerof = 0;
	pp->widthm = 0;
	pp->precim = 0;
	pp->lmod = 0;
	pp->hmod = 0;
}


/**
 * _checkflag1 - populate the parameters
 *
 * @format : string read to parse
 * @i : character of the string
 * @pp: print parameters structure
 *
 * Return: 1 if valid, 0 if not
 */

int _checkflag1(const char *format, int i, param *pp)
{
	switch (format[i])
	{
	case '+':
		pp->plusf = 1;
		return (1);
	case ' ':
		pp->spacef = 1;
		return (1);
	case '#':
		pp->diesef = 1;
		return (1);
	case '-':
		pp->minusf = 1;
		return (1);
	case '0':
		pp->zerof = 1;
		return (1);
	}
	return (0);
}


/**
 * _checkwidth - populate the width parameter
 *
 * @format : string read to parse
 * @i : character of the string
 * @pp: print parameters structure
 * @mylist : valist containing all arguments
 *
 * Return: nb character read if valid, 0 if not
 */

int _checkwidth(const char *format, int i, param *pp, va_list mylist)
{
	int mod;
	int j = 0;

	mod = 0;

	if (format[i] == '*')
	{
		pp->widthm = va_arg(mylist, int);
		j++;
	}
	else
	{
		while (format[i + j] >= '0' && format[i + j] <= '9')
		{
			mod = mod * 10 + (format[i + j] - '0');
			j++;
		}
		pp->widthm = mod;
	}
	return (j);
}



/**
 * _checkprecision - populate the width parameter
 *
 * @format : string read to parse
 * @i : character of the string
 * @pp: print parameters structure
 * @mylist : valist containing all arguments
 *
 * Return: nb character read if valid, 0 if not
 */

int _checkprecision(const char *format, int i, param *pp, va_list mylist)
{
	int mod;
	int j = 0;

	mod = 0;
	if (format[i] != '.')
		return (0);

	j++;
	if (format[i + j] == '*')
	{
		pp->precim = va_arg(mylist, int);
		j++;
	}
	else
	{
		while (format[i + j] >= '0' && format[i + j] <= '9')
		{
			mod = mod * 10 + (format[i + j] - '0');
			j++;
		}
		pp->precim = mod;
	}
	return (j);
}






/**
 * _checkmod1 - populate the parameters
 *
 * @format : string read to parse
 * @i : character of the string
 * @pp: print parameters structure
 *
 * Return: 1 if valid, 0 if not
 */

int _checkmod1(const char *format, int i, param *pp)
{
	switch (format[i])
	{
	case 'l':
		pp->lmod = 1;
		return (1);
	case 'h':
		pp->hmod = 1;
		return (1);
	}
	return (0);
}
