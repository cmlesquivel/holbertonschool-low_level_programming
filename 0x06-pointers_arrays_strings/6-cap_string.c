/**
 * cap_string - capitalizes all words of a string
 *@s: string to capitalized
 *Return: string capitalized
 **/

char *cap_string(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] == ' ') || (s[i] == 9) || (s[i] == '\n') || (s[i] == ',') ||
(s[i] == ';') || (s[i] == '.') || (s[i] == '!') || (s[i] == '?') ||
(s[i] == '"') || (s[i] == '(') || (s[i] == ')') || (s[i] == '{') ||
(s[i] == '}'))
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] = (s[i + 1] - 32);
}
}
}
if (s[0] >= 'a' && s[0] <= 'z')
{
s[0] = s[0] - 32;
}
return (s);
}