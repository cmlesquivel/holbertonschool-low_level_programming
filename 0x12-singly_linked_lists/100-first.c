#include <stdio.h>

void before_main() __attribute__((constructor));
void after_main() __attribute__((destructor));

void before_main() {
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
return (0);
}
