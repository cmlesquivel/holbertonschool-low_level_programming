#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "llo";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);

    if(t == NULL){
	    printf("array null");
    }
    return (0);
}

