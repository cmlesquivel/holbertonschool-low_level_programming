#include <stdio.h>

/**
 * main - print the 50 first Fibonacci numbers
 * Return: 1 is sucess the program
 **/

int main(void)
{
int i;
long a, b, c;
a = 1;
b = 2;
printf("%ld", a);
printf(",");
printf(" ");
printf("%ld", b);
printf(",");
printf(" ");
for (i = 2; i < 50; i++)
{
c = a + b;
printf("%ld", c);
if (i != 49)
{
printf(",");
printf(" ");
}
else
{
printf("\n");
}
a = b;
b = c;
}
return (0);
}
