#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

int print_char(va_list mylist)
{
	putchar(va_arg(mylist, int));
	return (0);
}

int print_string(va_list mylist)
{
	printf("%s", va_arg(mylist, char*));
	return (0);
}

