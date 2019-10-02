/**
* _strcpy - copy the string src to string dest
* @src: string source
* @dest: string dest
* Return: the string dest
**/

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\n'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = src[x];
	return (dest);
}
