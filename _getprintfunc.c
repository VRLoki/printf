/**
 * get_print_func -  selects the correct function
 *
 * @s : operator passed to the program
 *
 * Return: function to perform
 */

int (*get_print_func(const char *s))(va_list)
{
        printfunc_t pft[] = {
                {"c", print_char},
                {"s", print_string},
                {NULL, NULL}
        };

        int i;

        i = 0;
        while (i < 3)
        {
                if ((pft[i].c)[0] == s[0])
                        return (pft[i].f);
                i++;
        }

        return (NULL);
}
