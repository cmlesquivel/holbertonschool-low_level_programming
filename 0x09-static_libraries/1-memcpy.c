/**
* _memcpy - copy string src into dest
* @dest: array dest
* @src: array source
* @n: bytes of memory
* Return: array changed
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
