/**
* _isalpha - checks for lowercase o uppercase character
* @c:the character to check
* Return: On success 0 if the character is a letter, otherwise 1
*/

int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c > 64 && c < 91))
{
return (1);
}
else
{
return (0);
}
}
