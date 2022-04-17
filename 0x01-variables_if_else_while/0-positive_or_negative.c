#include <stdlib>
#include <time.h>
#include <stdio.h>
/**
*main - prints a random number and states whether it is postive, negative or zero
*Return: 0 on success
*/
int main(void)
{
int n;
srand(time(0);
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n");
else if (n < 0)
printf("%d is negative\n");
else
printf("%d is zero\n");
return (0);
}
