#include <stdio.h>

/**
* myStartupFun - check the code for Holberton School students.
*
* Return: Always 0.
*/

void myStartupFun(void) __attribute__ ((constructor));

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n
		I bore my house upon my back!\n");
}



/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's 
nature, challenges one to a race.)\n");
return (0);
}
