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
	}
	return (0);
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
