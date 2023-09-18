#include "main.h"
/**
 *_strncat - Concatenates two strings. it will use
 * At n bytes from src. src does not need to be null terminated.
 *@dest: Pointer to destination string.
 *@src: Pointer to source string.
 *@n: Number of bytes to be concatenated.
 *
 *Return: Ptr to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, j;
/* j is a counter for  n bytes of src to be concatenated */
/* length = length of destination string */

	length = 0;

	while (dest[length] != '\0')
		length++;

	for (j = 0; j < n && src[j] != '\0'; j++, length++)
		dest[length] = src[j];

	dest[length] = '\0';
	return (dest);
}
