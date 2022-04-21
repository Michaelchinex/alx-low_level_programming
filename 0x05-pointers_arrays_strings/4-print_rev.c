#include <stdio.h>
#include "main.h"
/**
* print_rev - a function that prints a string, in reverse,
* followed by a new line.
* @s: an input string
* Return: Nothing
*/
void print_rev(char *s)
{
int i;
int n;
{
for (i = 0; s[i] != '\0'; i++)
}
i++
for (n = i - 1; n >= 0; n--)
{
putchar(s[n]);
}
putchar('\n');
}
