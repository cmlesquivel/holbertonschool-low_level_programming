/**
 * _strcat: copy the string src to string dest
 *@dest: string dest
 *@src:string source
 *Return: string dest with src
 **/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int x;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[i] = src[x];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
