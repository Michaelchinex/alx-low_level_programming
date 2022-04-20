#include <stdio.h>
/**
* main - Entry -point
* Return: Always (Success)
*/
int main(void)
{
char alphabet;
for (alphabets = 'a'; alphabet <= 'z; alphabet++)
{
if (alphabet == 'q')
continue;
else if (alphabet == 'e')
continue;
putchar(alphabet);
}
putchar('\n')
return (0);
