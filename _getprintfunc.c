#include "main.h"

/**
 * _get_print_func -  selects the correct function
 *
 * @s : operator passed to the program
 *
 * Return: function to perform
 */

int	(*_get_print_func(const char s))(va_list, char *, int *, param *)
{
	printfunc_t	pft[] = {
		{'c', _print_char},
		{'s', _print_string},
		{'i', _print_numb},
		{'d', _print_numb},
		{'b', _print_b},
		{'o', _print_o},
		{'u', _print_u},
		{'x', _print_x},
		{'X', _print_X},
		{'%', _print_perc},
		{'r', _print_string_r},
		{'R', _print_string_R},
		{'S', _print_string_S},
		{'p', _print_p},
		{'\0', NULL}
	};
	int		i;

	i = 0;
	while (pft[i].c)
	{
		if ((pft[i].c) == s)
		{
			return (pft[i].f);
		}
		i++;
	}

	return (NULL);
}
