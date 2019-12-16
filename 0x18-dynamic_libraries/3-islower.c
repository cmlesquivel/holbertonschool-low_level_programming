/**
* _islower - checks for lowercase character
* @c:the character to check
* Return: On success 0 if the character is lowercase, otherwise 1
*/

int _islower(int c)
{
if (c > 96 && c < 123)
{
return (1);
}
else
{
return (0);
}
}
