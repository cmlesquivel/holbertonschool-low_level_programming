/**
* flip_bits - returns the number of bits you would need
* to flip to get from one number to another.
* @n:number one
* @m:number two
* Return: eturns the number of bits you would need
* to flip to get from one number to another.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int numberflip = 0;
unsigned long int number = n ^ m;

while (number >= 1)
{
if (number & 1)
{
numberflip++;
}
number = number >> 1;
}
return (numberflip);
}
