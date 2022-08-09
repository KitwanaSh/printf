#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct op - define the structure
 *
 * @c: the symbol pointer of char
 * @f: the funtion with it
 */
struct ops
{
	char *c;
	int (*f)(va_list);
};
typedef struct ops op_t;
#endif
