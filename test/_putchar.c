#include <unistd.h>
/**
 * _putchar - Print a character
 * @c: The  variable character to input
 *
 * Return: 1 for success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
