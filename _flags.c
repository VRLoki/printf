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
}


#include "holberton.h"
/**
 * _initparam - put the parameters to 0
 *
 * @pp: print parameters structure
 *
 * Return: Void
 */

void _checkflagchar(const char * format, int i, param *pp)
{
	switch (format[i])
	{
	case '+' :
		pp->plusf = 1;
		return (1);
	case ' ' :
		pp->spacef = 1;
		return (1);
	case '#':
		pp->diesef = 1;
		return (1);
	}
	return (0);
}

