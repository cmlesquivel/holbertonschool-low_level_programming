#include "stdio.h"x
#include "holberton.h"
void print_positive(int n);

/**
* print_to_98 - print a serie of numbers to 98
* @n: the number limit
*
* Return: return the add the two numbers
**/

void print_to_98(int n)
{
        int a, b, c, d, e;

        if (n > 98)
        {
            print_positive(n);
        }
        else if (n == 98)
        {
                printf("98\n");
        }
        else
        {
                for (a = n; a <= 98; a++)
                {
                          if(a<0){

                        
                         if (a < -99)
                        {
                                b = -a / 100;
                                c = a % 100;
                                d = -c / 10;
                                e = -c % 10;
                                _putchar('-');
                                _putchar(b + '0');
                                _putchar(d + '0');
                                _putchar(e + '0');
                        }
                        else
                        {
                                b = -a / 10;
                                c = -a % 10;
                                _putchar('-');
                                _putchar(b + '0');
                                _putchar(c + '0');
                        }
                    }
                    else
                    {
                                b = a / 10;
                                c = a  % 10;
                                _putchar(b + '0');
                                _putchar(c + '0');

                    }
                        if (a != 98)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
                        else
                        {
                                _putchar('\n');
                        }


                }
        }
}

void print_positive(int n){
                    for (a = n; a >= 98; a--)
                    {
                    if (a > 99)
                        {
                                b = a / 100;
                                c = a % 100;
                                d = c / 10;
                                e = c % 10;
                                _putchar(b + '0');
                                _putchar(d + '0');
                                _putchar(e + '0');
                        }

                        else{
                                b = a / 10;
                                c = a % 10;
                                _putchar(b + '0');
                                _putchar(c + '0');
                        }

                        if (a != 98)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
                        else
                        {
                                _putchar('\n');
                        }
                }
    

}
