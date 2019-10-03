/**
 * _strncpy - copy the n string src to string dest
 * @dest: string dest
 * @src: string source
 * @n: number de bytes to copy
 * Return: string dest with n src
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[i] = src[x];
		i++;
	}

	while (dest[i] != '\0' && i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
