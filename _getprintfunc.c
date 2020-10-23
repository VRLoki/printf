#include "holberton.h"

/**
 * get_print_func -  selects the correct function
 *
 * @s : operator passed to the program
 *
 * Return: function to perform
 */

int	(*get_print_func(const char s))(va_list)
{
        printfunc_t	pft[] = {
                {'c', print_char},
                {'s', print_string},
		{'d', print_number},
		{'i'} print_number},
                {'\0', NULL}
        };
        int		i;

        i = 0;
        while (i < 3)
        {
                if ((pft[i].c) == s)
                        return (pft[i].f);
                i++;
        }

        return (NULL);
}
