#include <stdio.h>
/**
* main - Entry point
* Return: Always (Success)
*/
int main(void)
{
int c;
int i;
int j;
int k;
for (c = 48; c <= 57; c++)
{
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
for (k = 48; k <= 57; k++)
{
if (((kv+ j) > (c + i) && k >= c) || c < k)
{
putchar(c);
putchar(i);
putchar(' ');
putcahr(j);
putchar(k);
if (c + i + j + k == 227 && c == 57)
{
break;
}
else
{
putchar(' ');
putchar(' ');
}
}
}
}
}
}
putcahr('\n');
return (o);
}
