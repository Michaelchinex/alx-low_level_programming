#include <unistd.h>
/**
<<<<<<< HEAD
 * _putchar - writes the character c to stdout 
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
=======
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c,1));
>>>>>>> ea1a6ff3d2931e10dce323a6d00a60fa70a476f3
}
