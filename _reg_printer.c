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
		{"S", _print_str_nonprintable},
		{"r", _print_str_reverse},
		{"R", _print_rot13},
		{"u", _print_uint},
		{"o", _print_octal},
		{"x", _print_hex_lower},
		{"X", _print_hex_upper},
		{"p", _print_pointer},
		{NULL, NULL}
	};
	for (i = 0; printers[i].specifier != NULL; i++)
	{
		/**
		 * This current implementation assumes the specifier is
		 * one character long. This needs to be updated to
		 * support specifiers containing more chatacters
		 */
		if (*specifier == *(printers[i].specifier))
			break;
	}
	return (printers[i]);
}
