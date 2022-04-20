#include "main.h"
#include <stdio.h>
/**
* print_rev - a function that prints a string, in reverse,
* followed by a new line.
* @s: an input string
* Return: Nothing
*/
void print_rev(char *s)
{
int len = 0;
int index;
while (s[index++])
len++;
for (index = len - 1; index >= 0; index--)
_putchar(s[index]);
_putchar('\n');
}
