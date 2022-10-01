#include <unistd.h>
/**
 * _putchar - write charcter c to stdout
 * @c: character to print
 * Return: 0 on succe
 * on error, -1 is returned, errno is set approperately
 */
int _putchar(char c)

{
		return (write(1, &c, 1));
}
