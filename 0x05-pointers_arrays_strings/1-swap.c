/**
* swap_int - swaps the values ot two integers
* @a: the first value to swaps
* @b: the second value to swaps
* Return: 0
**/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
