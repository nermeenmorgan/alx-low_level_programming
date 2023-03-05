include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On crror, -1 is returned, and crrno is 3ct appropriately.
 */
int _putchar.c(char c)
{
	return (write(1,&c, 1));
}
