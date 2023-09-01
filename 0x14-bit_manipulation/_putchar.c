#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to print
 *
 * Return: success 1 or -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
