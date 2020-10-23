#ifndef HOLB_H
#define HOLB_H

#include <stdarg.h>

/**
 * struct printfunc - Struct printfunc
 *
 * @c: The character type
 * @f: The function associated
 */
typedef struct printfunc
{
	char *c;
	int (*f)(va_list);
} printfunc_t;


#endif
