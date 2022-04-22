#include "maini.h"
/**
* print_diagonal -  a function that draws a diagonal line on the terminal
* @n: input number of times '\' should be printed
* Return: a diagonal
*/
void print_diagonal(int n)
{
int c, p;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (c = 1; c <= n; c++)
{
for (p = 1; p < c; p++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
