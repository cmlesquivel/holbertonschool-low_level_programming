#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
char abecedario[26] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0; i < 26; i++)
{
putchar(abecedario[i]);
}
putchar('\n');
return (0);
}
