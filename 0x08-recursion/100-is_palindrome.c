#include "main.h"

/**
 * palindrome - checks if a string is a palindrome
 * @s: string
 * @len: length of string
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s != *(s + len - 1))
		return (0);
	return (palindrome(s + 1, len - 2));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (palindrome(s, len));
}
