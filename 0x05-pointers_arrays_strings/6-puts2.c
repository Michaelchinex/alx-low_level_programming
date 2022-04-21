#include "main.h"
#include <stdio.h>
/**
* puts2 - Prints out every other char of the string.
* @str: input string to print.
*/
void puts2(char *str)
{
int i = 0;
for (; str[i] != '\0'; i++)
{
if ((i % 2) == 0)
_putchar(str[i]);
else
continue;
}
_putchar('\n');
}
