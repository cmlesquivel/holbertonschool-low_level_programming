/**
 * reverse_array - reverse a array
 *@n: size array- elements
 *@a: array to reverse
 *Return: void
 **/



void reverse_array(int *a, int n)
{
	int aux;
	int i;
	int j = 0;

	for (i = n - 1; i > j; i--)
	{
		aux = a[j];
		a[j] = a[i];
		a[i] = aux;
		j++;
	}
}
