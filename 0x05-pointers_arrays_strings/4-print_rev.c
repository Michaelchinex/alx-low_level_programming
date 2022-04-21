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
i = 0;
while (s[i] != '\0')
{
i++;
}
for (i = strlen(i) - 1; 1 >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
