#include "main.h"
/**
 *_memset - Fills Memory with a constant Byte.
 *Fills the first n bytes of the memory area ptnd
 *to by s with the cont b.
 *@s: pointer to memory area.
 *@b: cont to fill memory with.
 *@n: Byte of the memory area to be filled.
 *
 *Return: ptr to memory area s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
