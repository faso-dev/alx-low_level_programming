/**
 * _strchr - locates a character in a string
 * @s: pointer to memory area
 * @c: constant byte
 * Return: pointer to memory area s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	if (s[i] == c)
		return (&s[i]);
	return ('\0');
}
