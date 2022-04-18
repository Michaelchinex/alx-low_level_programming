#include <stdio.h>
/**
*main - Write a program that prints alphabet in 
*lowercase
*Return: Always (Success)
*/
int main(void)
{
int alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar("\n");
return (0);
}
