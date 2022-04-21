#include <stdio.h>
/**
* print_rev - a function that prints a string, in reverse,
* followed by a new line.
* @s: an input string
* Return: Nothing
*/
void print_rev(char *s)
{
int i;
while (s[i] != '\0')
{
i++;
}
i--;
while (s[i] != '\0')
{
putchar(s[i--]);
}
putchar('\n');
}
