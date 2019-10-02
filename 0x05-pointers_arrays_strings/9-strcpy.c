/**
* _strcpy - copy the string src to dest
* @src: string source
* @dest: string dest
* Return: the string dest
**/

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x;

	while (src[i] != '\n')
		i++;

	for (x = 0; x <= i; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
