#include "main.h"

/**
 * _strcpy -  Copies a string pointed to src and dest
 * @dest: Ptr Char
 * @src: Ptr char
 * Author: HassanMasinde
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
