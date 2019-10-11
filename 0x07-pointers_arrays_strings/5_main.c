#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello,w world hola mundo";
    char *f = "x";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);

    if(t==NULL){
	    printf("error no encontrado");
  }
    return (0);
}
