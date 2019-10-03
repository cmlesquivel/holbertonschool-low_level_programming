/**
* _atoi - convert string to integer
* @myarray: string to convert
* Return: integer convert
**/

int _atoi(char *myarray)
{

int i;
int number = 0;
int minus = 0;



for (i = 0; myarray[i] != '\0'; i++)
{
if (myarray[i] == '-')
{
minus++;
}
if (((myarray[i] - '0') >= 0) && ((myarray[i] - '0') <= 9))
{
number = (10 * number)+(myarray[i] - '0');
if ((myarray[i + 1] < '0') || (myarray[i + 1] > '9'))
{
break;
}
}
}
if (number == 0)
{
return (0);
}
else
{
if ((minus % 2) == 0)
{
return (number);
}
else
{
return (-number);
}
}
}
