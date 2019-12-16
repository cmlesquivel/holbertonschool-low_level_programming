/**
 * _strncat - copy the n string src to string dest
 * @dest: string dest
 * @src: string source
 * @n: number de bytes to copy
 * Return: string dest with n src
 **/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x;
	int lim_src = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[lim_src] != '\0')
	{
		lim_src++;
	}

	if (n > lim_src)
	{
		n = lim_src;
	}
	for (x = 0; x < n; x++)
	{
		dest[i] = src[x];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
