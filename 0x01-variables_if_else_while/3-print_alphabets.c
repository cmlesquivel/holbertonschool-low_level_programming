#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i,x;
char abecedario[26] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0; i < 26; i++)
{
putchar(abecedario[i]);
}
for (x = 0; x < 26; x++)
{
putchar(toupper(abecedario[x]));
}

putchar('\n');
return (0);
}
