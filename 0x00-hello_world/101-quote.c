#include <stdio.h>
#include <unistd.h>
/**
<<<<<<< HEAD
*main - prints out the last part of a quote in the standard error.
*Return: 1 if success.
*/
int main(void)
{
write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
retrun (1);
=======
* main - Prints out the last part of a quote in the standard error.
* Return: 1 if success.
*/
int main(void)
{
write(2, "and that piece of art is useful- Dora Korpar, 2015-10-19\n", 58);
return (1);
>>>>>>> e4957e7f34eaf8278ae7421bcb9a0ab3f0ab08bc
}
