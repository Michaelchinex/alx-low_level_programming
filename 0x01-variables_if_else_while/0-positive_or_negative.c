#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - prints a random number and states
*whether it is positive, negative and zero
*Return: 0 on success
*/
int main(void)
{
int n;
Srand(time(0);
n = rand() - RAND_MAX / 2;
if (n > 0)
printf(%d is poitive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
return (0);
}
