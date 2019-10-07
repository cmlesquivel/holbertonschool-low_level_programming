/**
* _memset - that fills memory with a constante byte
* @s: array
* @b: constante byte
* @n: bytes of memory
* Return: array changed
**/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
