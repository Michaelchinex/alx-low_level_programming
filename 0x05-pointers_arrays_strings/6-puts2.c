#include "main.h"
#include <stdio.h>
/**
* puts2 - Prints out every other char of the string.
* @str: input string to print.
*/
void puts2(char *str)
{
int i;
i = 0;
while (str[i++])
{
i++;
for (i = 0; i < len; i += 2)
_putchar(str[i]);
}
_putchar('\n');
}
