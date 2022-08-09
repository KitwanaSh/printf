#include "main.h"

/**
 * _get_printer - checkes for registered printer
 * @specifier: the pointer of char the specifies the elements
 *
 * Return: Found. if no exister printer, NULL occures.
 */
printer _get_printer(const char *specifier)
{
	int i;
	static printer printers[] = {
		{"c", _print_char},
		{"s", _print_str},
		{"d", _print_decimal},
		{"i", _print_int},
		{"b", _print_binary},
		{NULL, NULL}
	};
