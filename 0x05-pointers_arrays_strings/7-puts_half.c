#include <stdio.h>
#include "main.h"
/**
* puts_half - Prints out the first half of a string.
* @str: input string to print.
*/
void puts_half(char *str)
{
void puts_half(char *str)
{
int index = 0, len = 0, n;
while (str[index++])
len++;
if ((len % 2) == 0)
n = len / 2;
else
n = (len + 1) / 2;
for (index = n; index < len; index++)
_putchar(str[index]);
_putchar('\n');
}
