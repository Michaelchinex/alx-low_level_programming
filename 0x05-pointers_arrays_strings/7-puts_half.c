#include <stdio.h>
#include "main.h"
/**
* puts_half - Prints out the first half of a string.
* @str: input string to print.
*/
void puts_half(char *str)
{
int j, i, len;
len = 0;
for (i = 0; str[i] != '\0'; i++)
len++;
n = (len / 2);
if ((len % 2) == 1)
n = ((len + 1) / 2);
for (i = n; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
