#include <stdio.h>
#include "main.h"
/**
* main - Entry point
* Return: Always (Success)
*/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
