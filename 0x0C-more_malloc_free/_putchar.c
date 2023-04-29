#include <unistd.h>

/**
 * _putchar - writse the char c to stdout
 * @c: the char to print
 *
 * Return: On success1.
 * Onerror, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
