#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
int n, residuo;

srand(time(0));
n = rand() - RAND_MAX / 2;
residuo = n % 10;

if (residuo > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, residuo);
}
else if (residuo == 0)
{
printf("Last digit of %d is %d and is 0\n", n, residuo);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, residuo);
}

return (0);
}
