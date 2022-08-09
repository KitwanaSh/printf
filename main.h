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
printer _get_printer(const char *specifier);
int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list);
int _print_str(va_list);
int _print_decimal(va_list);
int _print_int(va_list);
int _print_binary(va_list);
#endif /* MAIN_H */
