#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct printer - define the structure
 *
 * @specifier: the symbol pointer of char
 * @f: the funtion with it
 */
typedef struct printer
{
	char *specifier;
	int (*f)(va_list);
} printer;
#endif
