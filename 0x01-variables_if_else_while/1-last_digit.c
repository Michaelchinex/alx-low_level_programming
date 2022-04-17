#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Determine if the last digit of a number is grater than 5
*less than 6 or zero
*Return: 0 on success
*/
int main(void)
{
int n;
char last[] = "Last digit of";
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%c is greater than 5\n", n);
else if (n < 6)
printf("%c and is less than 6 not 0\n", n);
else
printf("%c and is 0\n", n);
return (0);
}
