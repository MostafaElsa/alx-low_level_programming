#include "main.h"

/**
 *	is_palindrome - check the code
 *	@s: string
 *	Return: result
 */
int is_palindrome(char *s)
{
    int i = _strlen_recursion(s) - 1;
	return (_palindrome(0, i, s)
}
/**
 *	_palindrome - check the code
 *	@i: number1
 *	@j: number2
 *	@s: string
 *	Return: result
 */
int _palindrome(int i, int j, char *s)
{
    if (s[i] != s[j])
        return (0);
    if (i >= j)
        return (1);
    return (_palindrome(++i, --j, s)
}