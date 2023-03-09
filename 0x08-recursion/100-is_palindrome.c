 #include "main.h"
/**
  * palindrome_helper - check main
  * @s: input
  * @start: input
  * @end: input
  * Description: function
  * Return: 0 or 1
  */
int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - check main
 * @s: input
 * Description: function
 * Return: 0
 */

int is_palindrome(char *s)
{
	int len = 0;
	int start = 0;

	while (s[len] != '\0')
		len++;
	return (palindrome_helper(s, start, len - 1));
}
