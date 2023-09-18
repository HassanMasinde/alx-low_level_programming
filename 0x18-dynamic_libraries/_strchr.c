#include "main.h"
#define NULL 0

/**
* _strchr - Locate first occurrence of char in string and returns ptr there
* @s: String to Search
* @c: Target char
* Return: Ptr to that char in string
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);

	else
		return (NULL);
}
