#include <stdio.h>

/**
 * main - print the sum the multiple numbers of 3 and 5 below 1024
 * Return: 0 is sucess the program
 **/

int main(void)
{
int i;
int sum = 0;
for (i = 1; i < 1024; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
sum = sum + i;
}
else if (i % 3 == 0)
{
sum = sum + i;
}
else if (i % 5 == 0)
{
sum = sum + i;
}
}
printf("%d", sum);
printf("\n");
return (0);
}
